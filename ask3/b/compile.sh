flex mylexer.l
bison -d myparser.y
gcc -o askb.exe funcs.c myparser.tab.c lex.yy.c -lfl
