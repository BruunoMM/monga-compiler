%{
#include "shared.tokens.h"
%}

id              [a-zA-Z_][a-zA-Z0-9_]*
string          \"([^\\"\n]|\\.)*\"
literal         \'([^\']|\\n|\\t|\\\\|\\\')\'

decint          [0-9]+
decfloat        {decint}\.{decint}

expoent         ([pP][-+]?[0-9]+)?
hexint          0[xX][0-9a-fA-F]+
hexfloat        {hexint}\.[0-9a-fA-F]+{expoent}

comment         \#[^\n]*

%%
char            { printf("Li %s do tipo TK_CHAR\n", yytext); return TK_CHAR; }

int             { printf("Li %s do tipo TK_INT\n", yytext); return TK_INT; }

float           { printf("Li %s do tipo TK_FLOAT\n", yytext); return TK_FLOAT; }

bool            { printf("Li %s do tipo TK_BOOL\n", yytext); return TK_BOOL; }

return          { printf("Li %s do tipo TK_RETURN \n", yytext); return TK_RETURN; }

if              { printf("Li %s do tipo TK_IF\n", yytext); return TK_IF; }

else            { printf("Li %s do tipo TK_ELSE\n", yytext); return TK_ELSE; }

as              { printf("Li %s do tipo TK_AS\n", yytext); return TK_AS; }

new             { printf("Li %s do tipo TK_NEW\n", yytext); return TK_NEW; }

while           { printf("Li %s do tipo TK_WHILE\n", yytext); return TK_WHILE; }

true            { printf("Li %s do tipo TK_TRUE\n", yytext); return TK_TRUE; }

false           { printf("Li %s do tipo TK_FALSE\n", yytext); return TK_FALSE; }

"+"             { printf("Li %s do tipo TK_PLUS\n", yytext); return TK_PLUS; }

"-"             { printf("Li %s do tipo TK_MINUS\n", yytext); return TK_MINUS; }

"*"             { printf("Li %s do tipo TK_MULTIPLY\n", yytext); return TK_MULTIPLY; }

"/"             { printf("Li %s do tipo TK_DIVISION\n", yytext); return TK_DIVISION; }

"="             { printf("Li %s do tipo TK_ATTRIBUITION\n", yytext); return TK_ATTRIBUITION; }

"=="            { printf("Li %s do tipo TK_EQUALS\n", yytext);return TK_EQUALS; }

"~="            { printf("Li %s do tipo TK_NOTEQUALS\n", yytext); return TK_NOTEQUALS; }

">="            { printf("Li %s do tipo TK_GEQUALS\n", yytext); return TK_GEQUALS; }

"<="            { printf("Li %s do tipo TK_LEQUALS\n", yytext); return TK_LEQUALS; }

">"             { printf("Li %s do tipo TK_GREATER\n", yytext); return TK_GREATER; }

"<"             { printf("Li %s do tipo TK_LESSER\n", yytext); return TK_LESSER; }

"!"             { printf("Li %s do tipo TK_NOT\n", yytext); return TK_NOT; }

"&&"            { printf("Li %s do tipo TK_AND\n", yytext); return TK_AND; }

"||"            { printf("Li %s do tipo TK_OR\n", yytext); return TK_OR; }

{comment}      // does nothing

{id}            { printf("Li %s do tipo TK_ID\n", yytext); return TK_ID; }

{string}        { printf("Li %s do tipo TK_STRING\n", yytext); return TK_STRING; }

{literal}       { printf("Li %s do tipo TK_LITERAL\n", yytext); return TK_LITERAL; }

{decint}        { printf("Li %s do tipo TK_INTVALUE\n", yytext); return TK_INTVALUE; }

{decfloat}      { printf("Li %s do tipo TK_FLOATVALUE\n", yytext); return TK_FLOATVALUE; }

{hexint}        { printf("Li %s do tipo TK_INTVALUE\n", yytext); return TK_INTVALUE; }

{hexfloat}      { printf("Li %s do tipo TK_FLOATVALUE\n", yytext); return TK_FLOATVALUE; }
%%