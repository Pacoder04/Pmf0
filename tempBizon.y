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
    LET declarations IN command_sequence END { printf("Program is correct\n"); }
;

declarations:
    | declaration_seq { printf("Declarations are correct\n"); }
;

declaration_seq:
    type ident_decl { printf("Declaration_seq is correct\n"); }
    | declaration_seq type ident_decl { printf("Declaration_seq is correct\n"); }
;

ident_decl:
    '[' id_seq ']' ';' { printf("Ident_decl is correct\n"); }
;

id_seq:
   id_seq ',' IDENTIFIER  { printf("Id_seq is correct\n"); }
    | IDENTIFIER { printf("Id_seq is correct\n"); }
;

command_sequence:
    command_sequence command { printf("Command_sequence is correct\n"); }
    | command { printf("Command_sequence is correct\n"); }
;

command:
    SKIP ';' { printf("SKIP command\n"); }
    | IDENTIFIER '=' expression ';' { printf("Assignment command\n"); }
    | IF '(' boolean_expression ')' THEN command_sequence ELSE command_sequence FI ';' { printf("IF command\n"); }
    | WHILE boolean_expression DO command_sequence ENDWHILE { printf("WHILE command\n"); }
    | READ IDENTIFIER ';' { printf("READ command\n"); }
    | WRITE expression ';' { printf("WRITE command\n"); }
;

expression:
    INTCONST { printf("INTCONST expression\n"); }
    | DOUBLECONST { printf("DOUBLECONST expression\n"); }
    | BOOLCONST { printf("BOOLCONST expression\n"); }
    | STRCONST { printf("STRCONST expression\n"); }
    | IDENTIFIER { printf("IDENTIFIER expression\n"); }
    | '(' expression ')' { printf("Parenthesized expression\n"); }
    | expression '+' expression { printf("Addition expression\n"); }
    | expression '-' expression { printf("Subtraction expression\n"); }
    | expression '*' expression { printf("Multiplication expression\n"); }
    | expression '/' expression { printf("Division expression\n"); }
    | expression '%' expression { printf("Modulo expression\n"); }
    | '-' expression %prec UMINUS { printf("Unary minus expression\n"); }
    | '!' expression %prec NOT { printf("Logical NOT expression\n"); }
;

boolean_expression:    
    expression '<' expression { printf("Less than boolean expression\n"); }
    | expression '>' expression { printf("Greater than boolean expression\n"); }
    | expression LE expression { printf("Less than or equal boolean expression\n"); }
    | expression GE expression { printf("Greater than or equal boolean expression\n"); }
    | expression EQ expression { printf("Equal boolean expression\n"); }
    | expression NE expression { printf("Not equal boolean expression\n"); }
    | expression AND expression { printf("AND boolean expression\n"); }
    | expression OR expression { printf("OR boolean expression\n"); }
;

type:
    INT { printf("INT type\n"); }
    | DOUBLE { printf("DOUBLE type\n"); }
    | BOOL { printf("BOOL type\n"); }
    | STRING { printf("STRING type\n"); }
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