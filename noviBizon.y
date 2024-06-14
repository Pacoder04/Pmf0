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
%}

%union {
    int int_val;
    double double_val;
    char *str_val;
    int bool_val;
}

%token <int_val> INTCONST 
%token <double_val> DOUBLECONST
%token <bool_val> BOOLCONST
%token <str_val> STRCONST
%token INT DOUBLE BOOL STRING IDENTIFIER

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

%type <int_val> expression command command_sequence
%type <int_val> ident_decl id_seq declaration_seq

%%
program:
    LET declarations IN command_sequence END { printf("Program start\n"); } 
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
   id_seq ',' IDENTIFIER  { printf("Identifier sequence\n"); }
    | IDENTIFIER { printf("Single identifier\n"); }
;

command_sequence:
    command_sequence command { printf("Multiple commands\n"); }
    | command { printf("Single command\n"); }
;

command:
    SKIP ';' { printf("Skip command\n"); }
    | IDENTIFIER '=' expression ';' { printf("Assignment\n"); }
    | IF '(' boolean_expression ')' THEN command_sequence ELSE command_sequence FI ';' { printf("If command\n"); }
    | WHILE boolean_expression DO command_sequence ENDWHILE { printf("While loop\n"); }
    | READ IDENTIFIER ';' { printf("Read command\n"); }
    | WRITE expression ';' { printf("Write command\n"); }
;

expression:
    INTCONST { printf("Integer constant\n"); }
    | DOUBLECONST { printf("Double constant\n"); }
    | BOOLCONST { printf("Boolean constant\n"); }
    | STRCONST { printf("String constant\n"); }
    | IDENTIFIER { printf("Identifier\n"); }
    | '(' expression ')' { printf("Parenthesized expression\n"); }
    | expression '+' expression { printf("Addition\n"); }
    | expression '-' expression { printf("Subtraction\n"); }
    | expression '*' expression { printf("Multiplication\n"); }
    | expression '/' expression { printf("Division\n"); }
    | expression '%' expression { printf("Modulus\n"); }
    | '-' expression %prec UMINUS { printf("Unary minus\n"); }
    | '!' expression %prec NOT { printf("Logical NOT\n"); }
;

boolean_expression:    
    expression '<' expression { printf("Less than comparison\n"); }
    | expression '>' expression { printf("Greater than comparison\n"); }
    | expression LE expression { printf("Less than or equal to comparison\n"); }
    | expression GE expression { printf("Greater than or equal to comparison\n"); }
    | expression EQ expression { printf("Equality comparison\n"); }
    | expression NE expression { printf("Inequality comparison\n"); }
    | expression AND expression { printf("Logical AND\n"); }
    | expression OR expression { printf("Logical OR\n"); }
;

type:
    INT { printf("Integer type\n"); }
    | DOUBLE { printf("Double type\n"); }
    | BOOL { printf("Boolean type\n"); }
    | STRING { printf("String type\n"); }
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