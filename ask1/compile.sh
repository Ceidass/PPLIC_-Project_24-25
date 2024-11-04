flex mylexer.l
bison -d myparser.y
gcc -o ask1.exe funcs.c myparser.tab.c lex.yy.c -lfl
