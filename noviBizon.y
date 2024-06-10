%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
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

%token SKIP READ WRITE IF THEN ELSE FI WHILE DO END LET IN

%left '='
%left OR
%left AND
%nonassoc '!' 
%left '<' '>' LE GE
%left EQ NE
%left '+' '-'
%left '*' '/' '%'
%right UMINUS NOT

%type <int_val> expression
%type <int_val> command
%type <int_val> command_sequence
%type <int_val> declarations
%type <int_val> ident_decl
%type <int_val> id_seq

%%

program:
    LET declarations IN command_sequence END
    ;

declarations:
    declarations declarations
    | type ident_decl
    ;

ident_decl:
    '[' id_seq ']' IDENTIFIER '.'
    ;

id_seq:
    id_seq IDENTIFIER ','
    | IDENTIFIER ','
    ;

command_sequence:
    command_sequence command
    | command
    ;

command:
    SKIP ';'
    | IDENTIFIER '=' expression ';'
    | IF expression THEN command_sequence ELSE command_sequence FI ';'
    | WHILE expression DO command_sequence END ';'
    | READ IDENTIFIER ';'
    | WRITE expression ';'
    ;

expression:
    INTCONST
    | DOUBLECONST
    | BOOLCONST
    | STRCONST
    | IDENTIFIER
    | '(' expression ')'
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    | expression '%' expression
    | '-' expression %prec UMINUS
    | '!' expression %prec NOT
    | expression '<' expression
    | expression '>' expression
    | expression LE expression
    | expression GE expression
    | expression EQ expression
    | expression NE expression
    | expression AND expression
    | expression OR expression
    ;

type:
    INT
    | DOUBLE
    | BOOL
    | STRING
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    return yyparse();
}
