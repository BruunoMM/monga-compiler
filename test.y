%token TK_VINT
%token TK_INT TK_CHAR TK_FLOAT TK_VOID
%token TK_IF TK_ELSE TK_WHILE TK_RETURN TK_NEW TK_AS
%token TK_AND TK_OR TK_GEQUALS TK_LEQUALS TK_EQUALS TK_NEQUALS
%token TK_ID
%token TK_STRING
%token TK_VFLOAT

%{
#include <stdio.h>
#include "lex.yy.h"
%}

%%

programa : def-vars function-list 
         ;

function-list : %empty                         
              | def-function function-list   
              ;

def-var : TK_ID ':' type ';'    
        ;

def-vars : %empty               
         | def-vars def-var     
         ;

primary-type : TK_INT           
             | TK_CHAR          
             | TK_FLOAT       
             | TK_VOID          
             ;

type : primary-type     
     | type '[' ']'     
     ;

def-function : TK_ID '(' parameters ')' ':' type statement
             ;

parameters : %empty                     
           | parameter parameters1      
           ;

parameters1 : %empty                    
            | ',' parameter parameters1 

parameter : TK_ID ':' type 
          ;

statement : '{' def-vars commandlst '}' 
          ;

commandlst : %empty     
           | command commandlst 
           ;

var : TK_ID                             
    | base-exp '[' subadd-exp ']'       
    ;

command: TK_IF '(' exp ')' statement      
              | TK_IF '(' exp ')' statement TK_ELSE statement   
              | TK_WHILE '(' exp ')' statement  
              | func-call ';'           
              | TK_RETURN ';'           
              | TK_RETURN or-exp ';'    
              | '@' exp ';'             
              | var '=' exp ';'         
              | statement               
              ;

exp : or-exp    
    ;

or-exp : or-exp TK_OR and-exp  
       | and-exp                
       ;

and-exp : and-exp TK_AND equal-exp      
        | equal-exp                     
        ;

equal-exp : relation-exp TK_EQUALS relation-exp        
          | relation-exp TK_NEQUALS relation-exp       
          | relation-exp                               
          
relation-exp : subadd-exp '<' subadd-exp               
             | subadd-exp '>' subadd-exp               
             | subadd-exp TK_GEQUALS subadd-exp        
             | subadd-exp TK_LEQUALS subadd-exp        
             | subadd-exp                               
             ;

subadd-exp : subadd-exp '+' multdiv-exp                 
           | subadd-exp '-' multdiv-exp                 
           | multdiv-exp                                
           ;

multdiv-exp : multdiv-exp '*' prefix-exp                
            | multdiv-exp '/' prefix-exp                
            | prefix-exp                                
            ;

prefix-exp : '-' prefix-exp    
           | '!' prefix-exp     
           | posfix-exp         
           ;

posfix-exp : base-exp                         
           | base-exp  TK_AS type             
           | new-exp                          
           ;

new-exp : TK_NEW type '[' subadd-exp ']'          
        ;

base-exp : primary      
         | func-call    
         ;

func-call : TK_ID '(' list-exp ')' 
          ;

list-exp  : %empty              
          | or-exp list1-exp    
          ;

list1-exp : %empty                     
          | ',' or-exp list1-exp        
          ;

number : TK_VINT        
       | TK_VFLOAT      
       ;

word : TK_STRING 
     ;

primary : word         
        | number       
        | var           
        | '(' exp ')'   
        ;
%%