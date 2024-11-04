flex mylexer.l
bison -d myparser.y
gcc -o ask3c.exe funcs.c myparser.tab.c lex.yy.c -lfl
