%{

#include <stdio.h>
#include <stdlib.h>
%}

%x LINE_COMMENT
%x BLOCK_COMMENT


%%
[ \t\n]+                  /* ignorisi beline */
"//"              {BEGIN (LINE_COMMENT);}        /* ignorisi komentare do kraja linije */
"/*"                 {BEGIN BLOCK_COMMENT;}     /* ignorisi komentare do kraja bloka */
"if"      { printf("Matched keyword: %s\n", yytext); }
"else"    { printf("Matched keyword: %s\n", yytext); }
"while"  { printf("Matched keyword: %s\n", yytext); }
"for"     { printf("Matched keyword: %s\n", yytext); }
"return"  { printf("Matched keyword: %s\n", yytext); }
"true"               { printf("Matched boolean: %s\n", yytext); }
"false"              { printf("Matched boolean: %s\n", yytext); }

[a-zA-Z][a-zA-Z0-9_]* { printf("Matched identifier: %s\n", yytext); }
0|[1-9][0-9]*                 { printf("Matched integer: %s\n", yytext); }
0[1-7][0-7]*         { printf("Matched octal: %s\n", yytext); }
0[xX][0-9a-fA-F]+    { printf("Matched hexadecimal: %s\n", yytext); }



"+" { printf("Matched operator: %s\n", yytext); }
"-" { printf("Matched operator: %s\n", yytext); }
"*" { printf("Matched operator: %s\n", yytext); }
"/" { printf("Matched operator: %s\n", yytext); }
"=" { printf("Matched operator: %s\n", yytext); }
"==" { printf("Matched operator: %s\n", yytext); }
"!=" { printf("Matched operator: %s\n", yytext); }
"<" { printf("Matched operator: %s\n", yytext); }
"<=" { printf("Matched operator: %s\n", yytext); }
">" { printf("Matched operator: %s\n", yytext); }
">=" { printf("Matched operator: %s\n", yytext); }
"&&" { printf("Matched operator: %s\n", yytext); }
"||" { printf("Matched operator: %s\n", yytext); }
"!" { printf("Matched operator: %s\n", yytext); }


<LINE_COMMENT>{  // mozda ne smije biti razmaka kod viticaste zagrade 
 
  "\n"  {BEGIN (INITIAL);}

    .     {}
  


}   

<BLOCK_COMMENT>{
  "*/" {BEGIN (INITIAL);}

    .     {}

    "\n"  { }
  
}


%%