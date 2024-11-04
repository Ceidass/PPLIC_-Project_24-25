flex mylexer.l
bison -d myparser.y
gcc -o ask3a.exe funcs.c symbol_table.c myparser.tab.c lex.yy.c -lfl
