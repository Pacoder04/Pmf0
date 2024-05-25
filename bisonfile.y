%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char *s);  

%}
%union {

  int int_value;
  char* ident;

}

%start S
%token <int_value> INTEGER
%token T_SC
%token PLUS MINUS MULTIPLY DIVIDE 
%token T_LEFTP T_RIGHTP
%token <int_value> IDENTIFIER
%token ASSIGN
%left PLUS MINUS
%left MULTIPLY DIVIDE
%token T_TRUE
%token T_FALSE

%type <int_value> exp stat 

%%

S: S stat     {printf("Result: %d\n", $1);}
  | 
;

stat: exp T_SC               {}
      |IDENTIFIER ASSIGN exp T_SC  {printf("%s\n", "Dodjela");}  
;

exp: 
  |exp PLUS exp {$$ = $1 + $3;}
  |exp MINUS exp {$$ = $1 - $3;}
  |exp MULTIPLY exp {$$ = $1 * $3;}
  |exp DIVIDE exp {$$ = $1 / $3;}
  |T_LEFTP exp T_RIGHTP {$$=$2;}
  |INTEGER {$$=$1;}
  |IDENTIFIER {$$=1;}

%%

void yyerror(char* s){
  printf("Error: %s\n",s);
}

int main(){

  int res=yyparse();
  return res;
}