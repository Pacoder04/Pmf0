%option noyywrap
%option yylineno
%{
#include "tempBizon.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

%}

%x LINE_COMMENT 
%x BLOCK_COMMENT

%%

[ \t\n]+                  /* Ignore whitespace */
"//"                      { BEGIN(LINE_COMMENT); }
"/\\*"                    { BEGIN(BLOCK_COMMENT); }
"if"                      { return IF; }
"else"                    { return ELSE; }
"while"                   { return WHILE; }
"for"                     { return FOR; }
"return"                  { return RETURN; }
"true"                    { yylval.bool_val = 1; return BOOLCONST; }
"false"                   { yylval.bool_val = 0; return BOOLCONST; }
"int"                     { return INT; }
"double"                  { return DOUBLE; }
"bool"                    { return BOOL; }
"string"                  { return STRING; }
"write"                   { return WRITE; }
"read"                    { return READ; }
"skip"                    { return SKIP; }
"let"                     { return LET; }
"in"                      { return IN; }
"end"                     { return END; }
"endwhile"                { return ENDWHILE; }

"and"                     { return AND; }
"or"                      { return OR; }
"then"                    { return THEN; }
"fi"                      { return FI; }
"do"                      { return DO; }
"%"                       { return '%'; }
"uminus"                  { return UMINUS; }
"not"                     { return NOT; }

[a-zA-Z][a-zA-Z0-9_]*     { yylval.str_val = strdup(yytext); return IDENTIFIER; }
0|[1-9][0-9]*             { yylval.int_val = atoi(yytext); return INTCONST; }
[0-9]+"."[0-9]*(([eE][+-]?[0-9]+)?) { yylval.double_val = atof(yytext); return DOUBLECONST; }
\"[^\n"]*\"               { yylval.str_val = strdup(yytext); return STRCONST; }


"+"                       { return '+'; }
"-"                       { return '-'; }
"*"                       { return '*'; }
"/"                       { return '/'; }
"="                       { return '='; }
"=="                      { return EQ; }
"!="                      { return NE; }
"<"                       { return '<'; }
"<="                      { return LE; }
">"                       { return '>'; }
">="                      { return GE; }
"&&"                      { return AND; }
"||"                      { return OR; }
"!"                       { return '!'; }

";"                       { return ';'; }
"("                       { return '('; }
")"                       { return ')'; }
"{"                       { return '{'; }
"}"                       { return '}'; }
","                       { return ','; }
"["                       { return '['; }
"]"                       { return ']'; }
":"                       { return ':'; }

<LINE_COMMENT>{
    "\n"                  { BEGIN(INITIAL); }
    .                     { }
}

<BLOCK_COMMENT>{
    "\\*/"                { BEGIN(INITIAL); }
    .                     { }
    "\n"                  { }
}

%%