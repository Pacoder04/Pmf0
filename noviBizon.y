%debug
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern int yylineno;

void yyerror(char *s) {
    printf("Error: %s at line %d\n", s, yylineno);
}

typedef union Value {
    int intValue;
    char* stringValue;
} Value;

typedef struct ASTNode {
    char type;
    Value value;
    struct ASTNode *left;
    struct ASTNode *right;
} ASTNode;

ASTNode* createNode(char type, Value value, ASTNode *left, ASTNode *right) {
    ASTNode *node = malloc(sizeof(ASTNode));
    node->type = type;
    node->value = value; // Assuming value is already correctly initialized
    node->left = left;
    node->right = right;
    return node;
}

ASTNode* createIntNode(int intValue, ASTNode *left, ASTNode *right) {
    Value value;
    value.intValue = intValue;
    return createNode('I', value, left, right);
}

ASTNode* createStringNode(char* stringValue, ASTNode *left, ASTNode *right) {
    Value value;
    value.stringValue = strdup(stringValue); // Duplicate the string to ensure the node owns its copy
    return createNode('S', value, left, right);
}

void printAST(ASTNode *node, int level) {
    if (!node) return;
    for (int i = 0; i < level; ++i) printf("  ");
    if (node->type == 'I') printf("%d\n", node->value.intValue);
    else if (node->type == 'S') printf("%s\n", node->value.stringValue);
    else printf("%c\n", node->type);
    printAST(node->left, level + 1);
    printAST(node->right, level + 1);
}

void freeAST(ASTNode *node) {
    if (!node) return;
    if (node->type == 'S') free(node->value.stringValue); // Free the string if the node type is 'S'
    freeAST(node->left);
    freeAST(node->right);
    free(node);
}
%}

%union {
    int int_val;
    double double_val;
    char *str_val;
    int bool_val;
    ASTNode *ast_node; // Add ASTNode* to the union
}

%token <int_val> INTCONST 
%token <double_val> DOUBLECONST
%token <bool_val> BOOLCONST
%token <str_val> STRCONST IDENTIFIER
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

%type <ast_node> expression command command_sequence type  // Update types to use ast_node
%type <ast_node> ident_decl id_seq declaration_seq

%%

program:
    LET declarations IN command_sequence END { printf("Program start\n"); printAST($4, 0); freeAST($4); }
;

declarations:
    | declaration_seq { printf("Declarations\n"); }
;

declaration_seq:
    type ident_decl { printf("Type declaration\n"); }
    | declaration_seq type ident_decl { printf("Continued type declaration\n"); }
;

ident_decl:
    '[' id_seq ']' ';' { printf("Identifier declaration\n"); }
;

id_seq:
    IDENTIFIER { $$ = createStringNode($1, NULL, NULL); }
    | id_seq ',' IDENTIFIER { $$ = createNode('L', (Value){.stringValue = NULL}, $1, createStringNode($3, NULL, NULL)); }
;

type:
    INT { $$ = createNode('T', (Value){.stringValue = "int"}, NULL, NULL); }
    | DOUBLE { $$ = createNode('T', (Value){.stringValue = "double"}, NULL, NULL); }
    | BOOL { $$ = createNode('T', (Value){.stringValue = "bool"}, NULL, NULL); }
    | STRING { $$ = createNode('T', (Value){.stringValue = "string"}, NULL, NULL); }
;

command_sequence:
    command { $$ = $1; }
    | command_sequence command { $$ = createNode('C', (Value){.stringValue = NULL}, $1, $2); }
;

command:
    SKIP ';' { $$ = createNode('K', (Value){.stringValue = "skip"}, NULL, NULL); }
    | IDENTIFIER '=' expression ';' { $$ = createNode('=', (Value){.stringValue = $1}, $3, NULL); }
    | IF '(' expression ')' THEN command_sequence ELSE command_sequence FI ';' { $$ = createNode('I', (Value){.stringValue = NULL}, $3, createNode('E', (Value){.stringValue = NULL}, $6, $8)); }
    | WHILE '(' expression ')' DO command_sequence ENDWHILE ';' { $$ = createNode('W', (Value){.stringValue = NULL}, $3, $6); }
    | READ '(' IDENTIFIER ')' ';' { $$ = createNode('R', (Value){.stringValue = $3}, NULL, NULL); }
    | WRITE '(' expression ')' ';' { $$ = createNode('W', (Value){.stringValue = NULL}, $3, NULL); }
;

expression:
    INTCONST { $$ = createIntNode($1, NULL, NULL); }
    | IDENTIFIER { $$ = createStringNode($1, NULL, NULL); }
    | expression '+' expression { $$ = createNode('+', (Value){.stringValue = NULL}, $1, $3); }
    | expression '-' expression { $$ = createNode('-', (Value){.stringValue = NULL}, $1, $3); }
    | '-' expression %prec UMINUS { $$ = createNode('N', (Value){.stringValue = NULL}, $2, NULL); }
    | expression '*' expression { $$ = createNode('*', (Value){.stringValue = NULL}, $1, $3); }
    | expression '/' expression { $$ = createNode('/', (Value){.stringValue = NULL}, $1, $3); }
    | '(' expression ')' { $$ = $2; }
;

%%

int main() {
   
    int result = yyparse();
    if (result == 0) {
        printf("Parsing successful\n");
    } else {
        printf("Parsing failed\n");
    }
    return 0;
}