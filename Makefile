wipe:
	@rm parser
	@rm monga.tab.h
	@rm monga.tab.c
	@rm lex.yy.c
	
build_lex:
	@lex monga.l

build_bison:
	@bison -d monga.y
	@gcc -Wall -o parser monga.tab.c lex.yy.c

build:
	@make build_lex
	@make build_bison

tests:
	./parser < test1.m
	./parser < test2.m
