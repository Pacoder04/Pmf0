%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern int yylineno;

void yyerror(char *s){
   printf("Error: %s at line %d\n", s, yylineno);
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
%token T_SC T_COMMA
%token KW_INT KW_DOUBLE KW_BOOL KW_STRING
%token PLUS MINUS MULTIPLY DIVIDE 
%token T_LEFTP T_RIGHTP T_RIGHTB T_LEFTB
%token <ival> IDENTIFIER
%type <ival> S
%token ASSIGN
%left PLUS MINUS
%left MULTIPLY DIVIDE
%token T_TRUE
%token T_FALSE
%token KW_SKIP
%token KW_READ
%token KW_WRITE
%nonassoc EQUAL NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL KW_ELSE
%type <ival> exp stat term factor if_stat condition comparison conjunction comparison_operator T_TRUE T_FALSE 
%type <ival> unmatched_stat matched_stat 

%%

S: S stat     {printf("Result: %d\n");}
  |            {$$ = 0;}
;

stat: exp T_SC               { printf("%s\n", "Izraz"); }
      |IDENTIFIER ASSIGN exp T_SC  {printf("%s\n", "Dodjela");}  
      |if_stat {printf("%s\n", "If");}
      |KW_WHILE T_LEFTP condition T_RIGHTP T_LEFTB S T_RIGHTB {printf("%s\n", "While");}
      |for_stat {printf("%s\n", "For");}
      |KW_BREAK T_SC {printf("%s\n", "Break");}
      |declaration { printf("%s\n", "Declaration and Initialization"); }
      |function_def { printf("%s\n", "Function definition"); }
      |function_call { printf("%s\n", "Function call"); }
      |KW_RETURN exp T_SC { printf("%s\n", "Return"); }
      |KW_READ IDENTIFIER T_SC { printf("%s\n", "Read"); }
      |KW_WRITE exp T_SC { printf("%s\n", "Write"); }
      |KW_SKIP T_SC { printf("%s\n", "Skip"); }
;


exp: term
  |exp PLUS term {}
  |exp MINUS term {}
;

term: factor
  |term MULTIPLY factor {}
  |term DIVIDE factor {}
;

factor: T_LEFTP exp T_RIGHTP {printf("%s\n", "Zagrade");}
  |INTEGER {}
  |IDENTIFIER {}
  |T_TRUE {}
;

declaration: type IDENTIFIER ASSIGN exp T_SC { printf("%s\n", "Declaration and Initialization"); }
;

type: KW_INT 
    | KW_DOUBLE 
    | KW_BOOL 
    | KW_STRING 
;
function_def: type IDENTIFIER T_LEFTP params T_RIGHTP T_LEFTB S T_RIGHTB { printf("%s\n", "Function definition"); }
;

params: param
      | params T_COMMA param
;

param: type IDENTIFIER
;

function_call: IDENTIFIER T_LEFTP args T_RIGHTP T_SC { printf("%s\n", "Function call"); }
;

args: exp
    | args T_COMMA exp
;

for_stat: KW_FOR T_LEFTP type IDENTIFIER ASSIGN exp T_SC condition T_SC assignment T_RIGHTP T_LEFTB S T_RIGHTB { printf("%s\n", "For with declaration"); }
        | KW_FOR T_LEFTP assignment T_SC condition T_SC assignment T_RIGHTP T_LEFTB S T_RIGHTB { printf("%s\n", "For"); }
;

assignment: IDENTIFIER ASSIGN exp
;

if_stat: matched_stat
       | unmatched_stat
;

matched_stat: KW_IF T_LEFTP condition T_RIGHTP T_LEFTB S T_RIGHTB KW_ELSE T_LEFTB S T_RIGHTB {$$=0;}

;

unmatched_stat: KW_IF T_LEFTP condition T_RIGHTP T_LEFTB S T_RIGHTB {$$=0;}
              | KW_IF T_LEFTP condition T_RIGHTP T_LEFTB S T_RIGHTB KW_ELSE unmatched_stat {$$=0;}

;

condition: conjunction
    | condition OR conjunction
    ;

conjunction: comparison
     | conjunction AND comparison
     ;

comparison: T_TRUE
    | T_FALSE
    | IDENTIFIER comparison_operator IDENTIFIER
    ;

comparison_operator: EQUAL {printf("Equal\n");}
       | NOT_EQUAL {printf("Not equal\n");}
       | LESS {printf("Less\n");}
       | LESS_EQUAL {printf("Less equal\n");}
       | GREATER {printf("Greater\n");}
       | GREATER_EQUAL {printf("Greater equal\n");}
       ;
%%

int main(){

  int result = yyparse();
  if(result == 0){
    printf("Parsing successful\n");
  }else{
    printf("Parsing failed\n");
  }
  return 0;

}