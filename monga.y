%token TK_CHAR TK_INT TK_FLOAT TK_BOOL
%token TK_RETURN TK_IF TK_ELSE TK_AS TK_NEW TK_WHILE TK_TRUE TK_FALSE
%token TK_PLUS TK_MINUS 
%token TK_MULTIPLY TK_DIVISION TK_ATTRIBUITION
%token TK_EQUALS TK_NOTEQUALS TK_GEQUALS TK_LEQUALS TK_GREATER TK_LESSER
%token TK_NOT TK_AND TK_OR
%token TK_LITERAL TK_LITERALVALUE
%token <word> TK_ID
%token <word> TK_STRING
%token <intvalue> TK_INTVALUE
%token <floatvalue> TK_FLOATVALUE

%define parse.error verbose

%{
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef struct word {
   char *str;
   int len;
} Word;

void yyerror(const char *s);
int yywrap(void);
int yylex();

Def *AST_tree;

%}

%union {
    Type *type;
    Statement *stat;
    Def *def;
    int intvalue;
    float floatvalue;
    Word word;
    VarRef *varRef;
    Call *call;
    Exp *exp;
}

%type <type> tipo tipo_primario tipo_retorno
%type <def> definicao def_var def_vars def_funcoes def_funcao
             parametro parametrosAlt parametros
%type <stat> bloco comandos comando else
%type <exp> exp exp_or exp_and exp_equals exp_comparacao exp_somasub exp_multdiv
            exp_prefixada exp_posfixada exp_new exp_generica lista_exp exp_opcional 
            generico numero string boolean
%type <varRef> var
%type <call> chamada

%%
programa: definicao;

definicao: def_vars def_funcoes     { $$ = definitionsNode($1, $2); }
         ;

def_var: TK_ID ':' tipo ';'         { $$ = varDefinitionNode($1.str, $3); }
       ;

def_vars: def_vars def_var          { $$ = definitionsNode($1, $2); }
        | %empty                    { $$ = NULL;}
        ;

tipo: tipo_primario                 { $$ = $1; }
    | '[' tipo ']'                  { $$ = sequenceTypeNode(MULTIPLE,$2); }
    ;

tipo_primario: TK_CHAR              { $$ = typeNode(CHAR); }
             | TK_INT               { $$ = typeNode(INT); }
             | TK_FLOAT             { $$ = typeNode(FLOAT); }
             | TK_BOOL              { $$ = typeNode(BOOL); }
             ;

def_funcao: TK_ID '(' parametros ')' tipo_retorno bloco { $$ = funcDefNode(varDefinitionNode($1.str, $5), $3, $6); }
          ;

def_funcoes: def_funcao def_funcoes     { $$ = definitionsNode($1, $2); }
           | %empty                     { $$ = NULL; }
           ;

tipo_retorno: ':' tipo                  { $$ = $2 }
            | %empty                    { $$ = NULL; }
            ;

parametros: parametro parametrosAlt     { $$ = definitionsNode($1, $2); }
          | %empty                      { $$ = NULL };

parametrosAlt: ',' parametro parametrosAlt  { $$ = definitionsNode($2, $3); }
             | %empty                       { $$ = NULL };

parametro: TK_ID ':' tipo                   { $$ = varDefinitionNode($1, $3); }
         ;

bloco: '{' def_vars comandos '}'            { $$ = blockNode($2, $3); }
     ;

var: TK_ID
   | exp_generica '[' exp_somasub ']'
   ;

comandos: comando comandos                  { $$ = statementsNode($1, $2); }
        | %empty                            { $$ = NULL; }
        ;

comando: TK_IF exp bloco                    { $$ = ifNode($2, $3, NULL); }
       | TK_IF exp bloco else               { $$ = ifNode($2, $3, $4); }
       | TK_WHILE exp bloco                 { $$ = whileNode($2, $3); }
       | var TK_ATTRIBUITION exp ';'        { $$ = attrNode($1, $3); }
       | TK_RETURN exp_or ';'               { $$ = returnNode($2); }
       | TK_RETURN ';'                      { $$ = returnNode(NULL); }
       | chamada ';'                        { $$ = callStatNode($1); }
       | '@' exp ';'                        { $$ = printNode($2); }
       | bloco                              { $$ = $1; }
       ;

else: TK_ELSE bloco                         { $$ = $2; }
    ;

exp: exp_or                                 { $$ = $1; }
   ;

exp_or: exp_and                             { $$ = $1; }
      | exp_or TK_OR exp_and                { $$ = expNode(EXP_OR, $1, $3); }
      ;

exp_and: exp_equals                         { $$ = $1; }
       | exp_and TK_AND exp_equals          { $$ = expNode(EXP_AND, $1, $3); }
       ;

exp_equals: exp_comparacao TK_EQUALS exp_comparacao         { $$ = expNode(EXP_EQUALS, $1, $3); }
          | exp_comparacao TK_NOTEQUALS exp_comparacao      { $$ = expNode(EXP_NOTEQUALS, $1, $3); }
          | exp_comparacao                                  { $$ = $1; }
          ;

exp_comparacao: exp_somasub TK_LEQUALS exp_somasub          { $$ = expNode(EXP_LEQUALS, $1, $3); }
              | exp_somasub TK_GEQUALS exp_somasub          { $$ = expNode(EXP_GEQUALS, $1, $3); }
              | exp_somasub TK_LESSER exp_somasub           { $$ = expNode(EXP_LESSER, $1, $3); }
              | exp_somasub TK_GREATER exp_somasub          { $$ = expNode(EXP_GREATER, $1, $3); }
              | exp_somasub                                 { $$ = $1; }
              ;

exp_somasub: exp_somasub TK_MINUS exp_multdiv               { $$ = expNode(EXP_MINUS, $1, $3); }
           | exp_somasub TK_PLUS exp_multdiv                { $$ = expNode(EXP_PLUS, $1, $3); }
           | exp_multdiv                                    { $$ = $1; }
           ;

exp_multdiv: exp_posfixada TK_MULTIPLY exp_prefixada        { $$ = expNode(EXP_MULTIPLY, $1, $3); }
           | exp_posfixada TK_DIVISION exp_prefixada        { $$ = expNode(EXP_DIVISION, $1, $3); }
           | exp_posfixada                                  { $$ = $1; }
           ;

exp_prefixada: TK_NOT exp_prefixada                         { $$ = unaryExpNode(EXP_NOT, $2); }
             | TK_MINUS exp_prefixada                       { $$ = unaryExpNode(EXP_UNMINUS, $2); }
             | exp_posfixada                                { $$ = $1; }
             ;

exp_posfixada: exp_generica                                 { $$ = $1; }
             | exp_generica TK_AS tipo                      { $$ = castExpNode(EXP_CAST, $1, $3); }
             | exp_new                                      { $$ = $1; }
             ;

exp_new: TK_NEW tipo '[' exp_somasub ']'                    { $$ = newExpNode(EXP_NEW, $2, $4); }
       ;

exp_generica: generico                                      { $$ = $1; }
            | chamada                                       { $$ = callExpNode($1); }
            ;

numero: TK_INTVALUE
      | TK_FLOATVALUE
      | TK_LITERALVALUE ;

string: TK_STRING ;

boolean: TK_TRUE
       | TK_FALSE ;

generico: numero
        | var
        | string
        | '(' exp ')' 
        | boolean
        | TK_LITERAL ;

chamada: TK_ID '(' lista_exp ')'                            { $$ = callNode($1.str, $3); }
       ;

lista_exp: exp_or exp_opcional
         | %empty ;

exp_opcional: %empty
            | ',' lista_exp ;
%%

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

int yywrap(void) {
    return 1;
}

int main(int argc, char** argv) { 

    char* fileName;
    int file;

    AST_tree = safeAlloc(sizeof(Def));

    if (argc < 2) {
        puts("No input");
        return -1;
    }

    fileName = argv[1];
    file = fopen(fileName, "r");
    if (file == -1) {
        puts("Error opening the input file. \n");
        return -1;
    }

    yyrestart(fdopen(file, "r"));

    if (yyparse()) {
        exit(-1);
    }

    printf("\n");
    close(1);
    return yyparse();
}