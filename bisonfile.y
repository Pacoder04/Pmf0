%{
    
    
#include <stdio.h>
#include <stdlib.h>

    
    
    
%}


%start S
%token KW_IF
%token KW_ELSE
%token KW_WHILE
%token KW_FOR
%token KW_RETURN
%token IDENTIFIER
%token INTEGER
%token TRUE
%token FALSE
%token PLUS
%token MINUS
%token MULTIPLY
%token DIVIDE
%token ASSIGN
%token EQUAL
%token NOT_EQUAL
%token LESS
%token LESS_EQUAL
%token GREATER
%token GREATER_EQUAL
%token AND
%token OR
%token NOT



%%

S: statement
    | S statement
    ;

statement: KW_IF '(' expression ')' statement
    | KW_IF '(' expression ')' statement KW_ELSE statement
    | KW_WHILE '(' expression ')' statement
    | KW_FOR '(' expression ';' expression ';' expression ')' statement
    | KW_RETURN expression ';'
    | expression ';'
    ;

expression: IDENTIFIER ASSIGN expression

    | expression PLUS expression
    | expression MINUS expression
    | expression MULTIPLY expression
    | expression DIVIDE expression

    | expression EQUAL expression
    | expression NOT_EQUAL expression
    | expression LESS expression
    | expression LESS_EQUAL expression
    | expression GREATER expression
    | expression GREATER_EQUAL expression

    | expression AND expression
    | expression OR expression
    | NOT expression

    | '(' expression ')'
    | INTEGER
    | TRUE
    | FALSE
    | IDENTIFIER
    ;               

// Samo pocetak









%%