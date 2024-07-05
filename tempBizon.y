%debug
%{
#define _POSIX_C_SOURCE 200809L    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include <unistd.h>

extern int yylex();
extern int yyparse();
extern int yylineno;

void yyerror(char *s) {
    printf("Error: %s at line %d\n", s, yylineno);
}

struct ASTNode* root;
%}

%union {
    int int_val;
    char* ident_val;
    double double_val;
    char *str_val;
    int bool_val;
    struct ASTNode* node;
}
%start program
%token <int_val> INTCONST 
%token <ident_val> IDENTIFIER
%token <double_val> DOUBLECONST
%token <bool_val> BOOLCONST
%token <str_val> STRCONST
%token INT DOUBLE BOOL STRING 

%token SKIP READ WRITE IF THEN ELSE FI WHILE DO END LET IN ENDWHILE
%token FOR RETURN
%token '<' '>' LE GE EQ NE AND OR  UMINUS '!' '=' ';' ',' '(' ')' '{' '}' '+' '-' '*' '/' '%' '[' ']' ':' 


%left '='
%left OR
%left AND
%nonassoc '!'
%left '<' '>' LE GE
%left EQ NE
%left '+' '-'
%left '*' '/' '%'
%right UMINUS NOT



%type <node> program declarations command_sequence type boolean_expression declaration_seq ident_decl id_seq SKIP command
%type <node> expression
%%
program:
    LET declarations IN command_sequence END { 
      
       $$=createNode(NODE_PROGRAM);
        $$->left = $2;
        $$->right = $4;
        root = $$;

     }
;

declarations: { $$ = NULL; }
|declaration_seq { $$ = $1; }
;

declaration_seq:
    type ident_decl { 
        $$=createNode(NODE_DECLARATION);
        $$->left = $1;
        $$->right = $2;
        }
    | declaration_seq type ident_decl { 
        $$ = create_decl_seq_node($1,create_decl_node($2,$3));
     }
;

ident_decl:
    '[' id_seq ']' ';' { 
        $$=$2;
     }
;

id_seq:
   id_seq ',' IDENTIFIER  { 
        $$ = create_decl_seq_node($1,create_ident_node($3));
   }
    | IDENTIFIER { 
        $$ = create_decl_seq_node(NULL, create_ident_node($1));
    }
;

command_sequence:
    command_sequence command { 
        $$=$1;
        ASTNode* temp = $1;
        while(temp->next!=NULL){
            temp = temp->next;
            
        }
        temp->next = $2;
     }
    | command { 
        $$=$1;
     }
;

command:
    SKIP ';' { $$=$1; }
    | IDENTIFIER '=' expression ';' { 
         $$ = createNode(NODE_ASSIGN);
         $$->left = create_ident_node($1);
         $$->right = $3;
     }
    | IF '(' boolean_expression ')' THEN command_sequence ELSE command_sequence FI ';' { 
        $$ = createNode(NODE_IF);
        $$->left = $3;
        $$->right = $6;
        $$->next = $8;

    }
    | WHILE boolean_expression DO command_sequence ENDWHILE { 
        $$ = createNode(NODE_WHILE);
        $$->left = $2;
        $$->right = $4;
     }
    | READ IDENTIFIER ';' { 
        $$ = createNode(NODE_READ);
        $$->left = create_ident_node($2);
     }
    | WRITE expression ';' { 
        $$ = createNode(NODE_WRITE);
        $$->left = $2;
     
    }
;

expression:
    INTCONST { 
        $$ = create_int_node($1);
        $$->dataType = TYPE_INT;
     }
    | DOUBLECONST { 
        $$ = create_double_node($1);
        $$->dataType = TYPE_DOUBLE;
     }
    | BOOLCONST {
          $$ = create_bool_node($1);
          $$->dataType = TYPE_BOOL;
      }
    | STRCONST { $$ = create_string_node($1);
                 $$->dataType = TYPE_STRING; }
    | IDENTIFIER { 
        $$ = create_ident_node($1);
     }
    | '(' expression ')' { 
        $$ = $2;
     }
    | expression '+' expression { 
         if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
            $$ = create_binary_node(PLUS, $1, $3);
            $$->dataType = $1->dataType; 
        }else {
            yyerror("Type mismatch in addition expression");
            YYERROR;
        }
     }
    | expression '-' expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
           $$ = create_binary_node(MINUS, $1, $3);
           $$->dataType = $1->dataType; 
        } else {
            yyerror("Type mismatch in subtraction expression");
            YYERROR;
        }
    }
    | expression '*' expression { 
         if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
             $$ = create_binary_node(MULTIPLY, $1, $3);
             $$->dataType = $1->dataType;
         } else {
              yyerror("Type mismatch in multiplication expression");
              YYERROR;
         }
     }
    | expression '/' expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
           $$ = create_binary_node(DIVIDE, $1, $3);
           $$->dataType = $1->dataType; 
        } else {
           yyerror("Type mismatch in division expression");
           YYERROR;
        }
     }
    | expression '%' expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
            $$ = create_binary_node(MODULUS, $1, $3);
            $$->dataType = $1->dataType;
        } else {
           yyerror("Type mismatch in modulus expression");
           YYERROR;
        }
     }
    | '-' expression %prec UMINUS { 
        if ($2->dataType == TYPE_INT || $2->dataType == TYPE_DOUBLE) {
            $$ = create_unary_node(UMINUS, $2);
            $$->dataType = $2->dataType;
        } else {
            yyerror("Type mismatch in unary minus expression");
            YYERROR;
        }
      }
    | '!' expression %prec NOT { 
        if ($2->dataType == TYPE_BOOL) {
            $$ = create_binary_node(LOGICAL_NOT, NULL, $2);
            $$->dataType = TYPE_BOOL;
        } else {
            yyerror("Type mismatch in logical NOT expression");
            YYERROR;
        }
     }
;

boolean_expression:    
    expression '<' expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
           $$ = create_binary_node(LESS_THAN, $1, $3);
           $$->dataType = TYPE_BOOL;
        } else {
          yyerror("Type mismatch in less than boolean expression");
          YYERROR;
        }
     }
    | expression '>' expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
            $$ = create_binary_node(GREATER_THAN, $1, $3);
            $$->dataType = TYPE_BOOL;
        } else {
            yyerror("Type mismatch in greater than boolean expression");
            YYERROR;
        }

    }
    | expression LE expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
            $$ = create_binary_node(LESS_THAN_EQUAL, $1, $3);
            $$->dataType = TYPE_BOOL;
        } else {
            yyerror("Type mismatch in less than equal boolean expression");
            YYERROR;
        }
     }
    | expression GE expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
        $$ = create_binary_node(GREATER_THAN_EQUAL, $1, $3);
        $$->dataType = TYPE_BOOL;
    } else {
        yyerror("Type mismatch in greater than equal boolean expression");
        YYERROR;
    }
}
     
    | expression EQ expression { 
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
           $$ = create_binary_node(EQUAL, $1, $3);
           $$->dataType = TYPE_BOOL;
        } else {
            yyerror("Type mismatch in equal boolean expression");
            YYERROR;
        }
     }
    | expression NE expression {
        if (($1->dataType == TYPE_INT && $3->dataType == TYPE_INT) || ($1->dataType == TYPE_DOUBLE && $3->dataType == TYPE_DOUBLE)) {
           $$ = create_binary_node(NOT_EQUAL, $1, $3);
           $$->dataType = TYPE_BOOL;
        } else {
           yyerror("Type mismatch in not equal boolean expression");
           YYERROR;
        }

     }
    | expression AND expression { 
        if ($1->dataType == TYPE_BOOL && $3->dataType == TYPE_BOOL) {
            $$ = create_binary_node(LOGICAL_AND, $1, $3);
            $$->dataType = TYPE_BOOL;
       } else {
            yyerror("Type mismatch in logical AND expression");
            YYERROR;
       }
     }
    | expression OR expression { 
        if ($1->dataType == TYPE_BOOL && $3->dataType == TYPE_BOOL) {
            $$ = create_binary_node(LOGICAL_OR, $1, $3);
            $$->dataType = TYPE_BOOL;
        } else {
             yyerror("Type mismatch in logical OR expression");
             YYERROR;
        }
    }
;

type:
    INT { $$ = createNode(NODE_TYPE); $$->value.string_value=strdup("int"); }
    | DOUBLE { $$ = createNode(NODE_TYPE); $$->value.string_value=strdup("double"); }
    | BOOL { $$ = createNode(NODE_TYPE); $$->value.string_value=strdup("bool");}
    | STRING { $$ = createNode(NODE_TYPE); $$->value.string_value=strdup("string");}
;


%%

int main() {
   
    int result = yyparse();
    if (result == 0) {
        printf("Parsing successful\n");
        print_ast(root, 0);
    } else {
        printf("Parsing failed\n");
    }

    if (root) {
        free_ast(root);
    }

    return 0;
}