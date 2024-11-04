flex mylexer.l
bison -d myparser.y
gcc -o err.exe funcs.c myparser.tab.c lex.yy.c -lfl
