# Instruções
Disponibilizo um Makefile para facilitar a compilação dos programas e geração dos arquivos necessários para os testes de gramática.

## Compilação
$ make build

O comando irá gerar o arquivo lex.yy.c, e então gerará o arquivo de gramática monga.tab.c e monga.tab.h, compilando na sequência os arquivos necessários para gerar o programa de saída, chamado "parser".

## Execução
Caso o programa seja compilado através do Makefile, o mesmo se chamará 'parser'. Para executá-lo com um arquivo fonte em monga, basta executar na linha de comando:

$ ./parser < pathdoarquivo

Caso queira executar com os códigos fonte em monga que foram usados para teste, basta executar:

$ make tests

## Adicional
Para remover os arquivos gerados no processo de compilação, execute:
$ make wipe

Note que este comando, removerá os arquivos "parser", "monga.tab.h", "monga.tab.c" e "lex.yy.c", caso algum arquivo tenha sido gerado de outra forma, ou com outro nome, esse comando não irá removê-lo.
