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
    SKIP ';' { printf("Command is correct\n"); }
    | IDENTIFIER '=' expression ';' { printf("Command is correct\n"); }
    | IF '(' boolean_expression ')' THEN command_sequence ELSE command_sequence FI ';' { printf("Command is correct\n"); }
    | WHILE boolean_expression DO command_sequence ENDWHILE { printf("Command is correct\n"); }
    | READ IDENTIFIER ';' { printf("Command is correct\n"); }
    | WRITE expression ';' { printf("Command is correct\n"); }
;

expression:
    INTCONST { printf("Expression is correct\n"); }
    | DOUBLECONST { printf("Expression is correct\n"); }
    | BOOLCONST { printf("Expression is correct\n"); }
    | STRCONST { printf("Expression is correct\n"); }
    | IDENTIFIER { printf("Expression is correct\n"); }
    | '(' expression ')' { printf("Expression is correct\n"); }
    | expression '+' expression { printf("Expression is correct\n"); }
    | expression '-' expression { printf("Expression is correct\n"); }
    | expression '*' expression { printf("Expression is correct\n"); }
    | expression '/' expression { printf("Expression is correct\n"); }
    | expression '%' expression { printf("Expression is correct\n"); }
    | '-' expression %prec UMINUS { printf("Expression is correct\n"); }
    | '!' expression %prec NOT { printf("Expression is correct\n"); }
;

boolean_expression:    
    expression '<' expression { printf("Boolean expression is correct\n"); }
    | expression '>' expression { printf("Boolean expression is correct\n"); }
    | expression LE expression { printf("Boolean expression is correct\n"); }
    | expression GE expression { printf("Boolean expression is correct\n"); }
    | expression EQ expression { printf("Boolean expression is correct\n"); }
    | expression NE expression { printf("Boolean expression is correct\n"); }
    | expression AND expression { printf("Boolean expression is correct\n"); }
    | expression OR expression { printf("Boolean expression is correct\n"); }
;

type:
    INT { printf("Type is correct\n"); }
    | DOUBLE { printf("Type is correct\n"); }
    | BOOL { printf("Type is correct\n"); }
    | STRING { printf("Type is correct\n"); }
;


%%

int main() {
    extern int yydebug;
    yydebug = 1;
    int result = yyparse();
    if (result == 0) {
        printf("Parsing successful\n");
    } else {
        printf("Parsing failed\n");
    }
    return 0;
}
