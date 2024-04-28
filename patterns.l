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
0|[1-9][0-9]*                 { yylval.ival = atoi(yytext); return INTEGER; }
0[1-7][0-7]*         { yylval.ival = strtol(yytext, NULL, 8); return OCTAL; }
0[xX][0-9a-fA-F]+    { yylval.ival = strtol(yytext, NULL, 16); return HEXADECIMAL; }

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
