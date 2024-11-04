flex mylexer.l
bison -d myparser.y
gcc -o ask2b.exe funcs.c myparser.tab.c lex.yy.c -lfl
