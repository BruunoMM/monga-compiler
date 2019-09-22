%{
#include "monga.tab.h"
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
char            { return TK_CHAR; }

int             { return TK_INT; }

float           { return TK_FLOAT; }

bool            {return TK_BOOL; }

return          { return TK_RETURN; }

if              { return TK_IF; }

else            { return TK_ELSE; }

as              { return TK_AS; }

new             { return TK_NEW; }

while           { return TK_WHILE; }

true            { return TK_TRUE; }

false           { return TK_FALSE; }

"+"             { return TK_PLUS; }

"-"             { return TK_MINUS; }

"*"             { return TK_MULTIPLY; }

"/"             { return TK_DIVISION; }

"="             { return TK_ATTRIBUITION; }

"=="            { return TK_EQUALS; }

"~="            { return TK_NOTEQUALS; }

">="            { return TK_GEQUALS; }

"<="            { return TK_LEQUALS; }

">"             { return TK_GREATER; }

"<"             { return TK_LESSER; }

"!"             { return TK_NOT; }

"&&"            { return TK_AND; }

"||"            { return TK_OR; }

{comment}      // does nothing

{id}            { return TK_ID; }

{string}        { return TK_STRING; }

{literal}       { return TK_LITERAL; }

{decint}        { return TK_INTVALUE; }

{decfloat}      { return TK_FLOATVALUE; }

{hexint}        { return TK_INTVALUE; }

{hexfloat}      { return TK_FLOATVALUE; }

[ \t\n]+        /* noop */

.               { return yytext[0]; }
%%