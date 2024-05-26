%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char *s){
  printf("Error: %s\n",s);
}  


%}
%union {

  int ival;
  char* sval;
  double dval;


}

%start S
%token KW_IF KW_ELSE KW_WHILE KW_FOR KW_BREAK KW_CONTINUE KW_RETURN
%token DOUBLE OCTAL HEXADECIMAL STRING
%token EQUAL NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL AND OR NOT
%token <ival> INTEGER
%token T_SC
%token PLUS MINUS MULTIPLY DIVIDE 
%token T_LEFTP T_RIGHTP
%token <ival> IDENTIFIER
%type <ival> S
%token ASSIGN
%left PLUS MINUS
%left MULTIPLY DIVIDE
%token T_TRUE
%token T_FALSE

%type <ival> exp stat term factor if_stat condition comparison conjunction 


%%

S: S stat     {printf("Result: %d\n", $1);}
  |            {$$ = 0;}
;

stat: exp T_SC               { printf("%s\n", "Izraz"); $$ = 0;}
      |IDENTIFIER ASSIGN exp T_SC  {printf("%s\n", "Dodjela");$$ = 0;}  
      |if_stat {printf("%s\n", "If");$$ = 0;}
;

exp: term
  |exp PLUS term {$$ = $1 + $3;}
  |exp MINUS term {$$ = $1 - $3;}
;

term: factor
  |term MULTIPLY factor {$$ = $1 * $3;}
  |term DIVIDE factor {$$ = $1 / $3;}
;

factor: T_LEFTP exp T_RIGHTP {$$=$2;}
  |INTEGER {$$=$1;}
  |IDENTIFIER {$$=1;}
  |T_TRUE {$$=1;}
;

if_stat:KW_IF T_LEFTP condition T_RIGHTP stat {$$=0;}
  |KW_IF T_LEFTP condition T_RIGHTP stat KW_ELSE stat {$$=0;}

; 

condition: condition OR conjunction {$$ = $1 || $3;}
         | conjunction {$$ = $1;}
;

conjunction: conjunction AND comparison {$$ = $1 && $3;}
           | comparison {$$ = $1;}
;

comparison: exp EQUAL exp {$$ = $1 == $3;}
          | exp NOT_EQUAL exp {$$ = $1 != $3;}
          | exp LESS exp {$$ = $1 < $3;}
          | exp LESS_EQUAL exp {$$ = $1 <= $3;}
          | exp GREATER exp {$$ = $1 > $3;}
          | exp GREATER_EQUAL exp {$$ = $1 >= $3;}
;


%%



int main(){

  int res=yyparse();
  return res;
}