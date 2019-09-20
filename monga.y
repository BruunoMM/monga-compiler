%token TK_CHAR TK_INT TK_FLOAT TK_BOOL
%token TK_RETURN TK_IF TK_ELSE TK_AS TK_NEW TK_WHILE TK_TRUE TK_FALSE
%token TK_PLUS TK_MINUS 
%token TK_MULTIPLY TK_DIVISION TK_ATTRIBUITION
%token TK_EQUALS TK_NOTEQUALS TK_GEQUALS TK_LEQUALS TK_GREATER TK_LESSER
%token TK_NOT TK_AND TK_OR
%token TK_ID TK_STRING TK_LITERAL TK_INTVALUE TK_FLOATVALUE TK_LITERALVALUE

%{
#include <stdio.h>
#include "lex.yy.c"
%}

%type chamada
%type tipo_primario tipo
%type var
%type def_funcoes def_funcao def_var def_vars
             parametro parametros parametrosAlt
%type bloco comandos comando
%type exp exp_or exp_and exp_comparacao exp_equals exp_somasub exp_multdiv
             exp_generica exp_prefixada exp_posfixada generico numero string lista_exp exp_opcional
             exp_new
                
%%
programa: definicao;

definicao: def_vars def_funcoes ;

def_var: TK_ID ':' tipo ';' ;

def_vars: def_vars def_var
        | %empty ;

tipo: tipo_primario
    | '[' tipo ']' ;

tipo_primario: TK_CHAR
             | TK_INT
             | TK_FLOAT
             | TK_BOOL ;

def_funcao: TK_ID '(' parametros ')' ':' tipo_retorno bloco ;

def_funcoes: def_funcao def_funcoes
           | %empty ;

tipo_retorno: tipo
            | %empty ;

parametros: parametro parametrosAlt
          | %empty ;

parametrosAlt: ',' parametro parametrosAlt
             | %empty ;

parametro: TK_ID ':' tipo ;

bloco: '{' def_vars comandos '}' ;

var: TK_ID 
   | exp_generica '[' exp_somasub ']';

comandos: comando comandos
        | %empty ;

comando: TK_IF exp bloco
       | TK_IF exp bloco else
       | TK_WHILE exp bloco
       | var TK_ATTRIBUITION exp ';'
       | TK_RETURN exp_or ';'
       | TK_RETURN ';'
       | chamada ';'
       | '@' exp ';'
       | bloco ;

else: TK_ELSE bloco;

exp: exp_or ;

exp_or: exp_and
      | exp_or TK_OR exp_and ;

exp_and: exp_equals
       | exp_and TK_AND exp_equals ;

exp_equals: exp_comparacao TK_EQUALS exp_comparacao
          | exp_comparacao TK_NOTEQUALS exp_comparacao
          | exp_comparacao ;

exp_comparacao: exp_somasub TK_LEQUALS exp_somasub
              | exp_somasub TK_GEQUALS exp_somasub
              | exp_somasub TK_LESSER exp_somasub
              | exp_somasub TK_GREATER exp_somasub
              | exp_somasub ;

exp_somasub: exp_somasub TK_MINUS exp_multdiv
           | exp_somasub TK_PLUS exp_multdiv
           | exp_multdiv ;

exp_multdiv: exp_posfixada TK_MULTIPLY exp_prefixada
           | exp_posfixada TK_DIVISION exp_prefixada
           | exp_posfixada ;

exp_prefixada: TK_NOT exp_prefixada
             | TK_MINUS exp_prefixada
             | exp_posfixada ;

exp_posfixada: exp_generica
             | exp_generica TK_AS tipo
             | exp_new ;

exp_new: TK_NEW tipo '[' exp_somasub ']' ;

exp_generica: generico
            | chamada ;

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

chamada: TK_ID '(' lista_exp ')' ;

lista_exp: exp_or exp_opcional ;

exp_opcional: %empty
            | ',' lista_exp ;
%%
