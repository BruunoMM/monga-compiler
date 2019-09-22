testfile:= hello_world.m

build_lex:
	@lex monga.l

build_bison:
	@bison -d monga.y
	@gcc -Wall -o bisontest monga.tab.c lex.yy.c

build:
	@make build_lex
	@make build_bison

tests:
	@./bisontest < ${testfile}
