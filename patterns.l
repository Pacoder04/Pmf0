%{

#include <stdio.h>
#include <stdlib.h>
%}

%x LINE_COMMENT
%x BLOCK_COMMENT


%%
[ \t\n]+                  /* ignorisi beline */
"//"              {BEGIN (LINE_COMMENT)}        /* ignorisi komentare do kraja linije */
"/*"                 {BEGIN BLOCK_COMMENT}     /* ignorisi komentare do kraja bloka */
"if"      { return KW_IF; }
"else"    { return KW_ELSE; }
"while"  { return KW_WHILE; }
"for"     { return KW_FOR; }
"return"  { return KW_RETURN; }

[a-zA-Z][a-zA-Z0-9_]* { yylval.sval = strdup(yytext); return IDENTIFIER; }
[0-9]+                { yylval.ival = atoi(yytext); return INTEGER; }
"true"               { return TRUE; } // da li treba da se vrati TRUE ili 1, i da li je to dovoljno(da li je tacno)
"false"              { return FALSE; }

"+" { return PLUS; }
"-" { return MINUS; }
"*" { return MULTIPLY; }
"/" { return DIVIDE; }
"=" { return ASSIGN; }
"==" { return EQUAL; }
"!=" { return NOT_EQUAL; }
"<" { return LESS; }
"<=" { return LESS_EQUAL; }
">" { return GREATER; }
">=" { return GREATER_EQUAL; }
"&&" { return AND; }
"||" { return OR; }
"!" { return NOT; }


<LINE_COMMENT> {  //mozda ne smije biti razmaka kod viticaste zagrade
 
  "\n"  {BEGIN (INITIAL);}

    .     {}
  


}   

<BLOCK_COMMENT> {
  "*/" {BEGIN (INITIAL);}

    .     {}

    "\n"  { }
  
}


%%
