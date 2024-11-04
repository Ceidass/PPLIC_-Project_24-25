%{
#include <stdio.h>
#include <stdlib.h>
#include "myparser.tab.h"
#include "funcs.h"
%}

%option header-file="mylexer.h"

DIGIT      [0-9]
LOWER      [a-z]
CAPITAL    [A-Z]
LETTER     {CAPITAL}|{LOWER}
SQUOTE      '
DQUOTE      ["]
COLON       :
SCOLON      ;
DOT         [.]
COMMA       [,]
STHAN       <
BTHAN       >
LBRACK      \[
RBRACK      \]
LCURL       \{
RCURL       \}
LPAR        [(]        
RPAR        [)]
PLUS        [+]
MINUS       -
MULT        [*]
DIV         [/]
ASSIGN      =
ISEQ        ==
ISNEQ       !=
BINOR       [|]
BINAND      [&]
BOOLOR      {BINOR}{BINOR}
BOOLAND     {BINAND}{BINAND}
TYPE        int|char|double|boolean|String
MODIFIER    public|private
KEYWORD     class|void|if|else|else{WHITESPACE}if|for|do|while|switch|case|default|break|return|new|true|false|out.print
CLASSID     ({CAPITAL})({LETTER}|{DIGIT}|"_")*
VARID       ({LETTER}|"_")({LETTER}|{DIGIT}|"_")*
METHID      (({LOWER}|"_")({LETTER}|{DIGIT}|"_")*){WHITESPACE}*{LPAR}
WHITESPACE  [ \t]+
NLINE       [\n]
INTEGER     {DIGIT}+
DOUBLE      {DIGIT}+"."{DIGIT}+"d"
STRING      \"(\\.|[^\\"])*\"
CHAR        \'(\\.|[^\\'])\'
OLC         {DIV}{DIV}[^\n]*{NLINE}
MLC         {DIV}{MULT}({NLINE}|.)*{MULT}{DIV}

%%

{KEYWORD}    { printf("keyword\n");return whichKeyword(yytext);/*returns the specific keyword*/ }
{TYPE}       { printf("type\n");return whichType(yytext); /*returns the specific type*/}
{MODIFIER}   { printf("modifier\n");return whichMod(yytext); /*returns the specific modifier*/}
{CLASSID}    { printf("Class ID\n");return CLASSID; }
{VARID}      { printf("Var ID\n");return checkVarid(yytext); /*returns VARID or the specific keyword*/}
{METHID}     { printf("Meth ID\n");return checkVarid(yytext); /*returns METHID or the specific keyword*/}
{INTEGER}    { yylval.intval=atoi(yytext); printf("Intval %d\n",yylval.intval); return INTEGER; }
{DOUBLE}     { yylval.doubleval = atof(yytext); printf("Doubleval %f\n",yylval.doubleval); return DOUBLE; }
{STRING}     { yylval.stringval=strdup(yytext); printf("Stringval %s\n",yylval.stringval); return STRING; }
{CHAR}       { yylval.charval=yytext[0]; printf("Charval %c\n",yylval.charval); return CHAR;  }
{WHITESPACE} { printf("space\n");}
{NLINE}      { printf("nline\n");}
{COLON}      { printf("colon\n");return COLON;}
{SCOLON}     { printf("scolon\n");return SCOLON; }
{DOT}        { printf("dot\n");return DOT;}
{COMMA}      { printf("comma\n");return COMMA;}
{STHAN}      { printf("sthan\n");return STHAN; }
{BTHAN}      { printf("bthan\n");return BTHAN; }
{SQUOTE}     { printf("squote\n");return SQUOTE; }
{DQUOTE}     { printf("dquote\n");return DQUOTE; }
{LBRACK}     { printf("lbrack\n");return LBRACK; } 
{RBRACK}     { printf("rbrack\n");return RBRACK; }
{LCURL}      { printf("lcurl\n");return LCURL; }
{RCURL}      { printf("rcurl\n");return RCURL; }
{LPAR}       { printf("lpar\n");return LPAR; }
{RPAR}       { printf("rpar\n");return RPAR; }
{PLUS}       { printf("plus\n");return PLUS; }
{MINUS}      { printf("minus\n");return MINUS; }
{MULT}       { printf("mult\n");return MULT; }
{DIV}        { printf("div\n");return DIV; }
{ASSIGN}     { printf("assign\n");return ASSIGN; }
{ISEQ}       { printf("iseq\n");return ISEQ; }
{ISNEQ}      { printf("inseq\n");return ISNEQ; }
{BINOR}      {}
{BINAND}     {}
{BOOLOR}     { printf("boolor\n");return BOOLOR; }
{BOOLAND}    { printf("booland\n");return BOOLAND; }
{OLC}        { printf("One line comment\n");}
{MLC}        { printf("Multiline comment\n"); }

%%

//int yylex(void);

// void yyerror(const char *s);

// int main(int argc, char **argv){
//     if(argc>1){
//         if(argc==2 && isFile(argv[1])){
//             printf("Is File\n"); //debug
//             yyin = fopen(argv[1], "r");
//             yylex();
//             fclose(yyin);
//         }else{
//             for(int i=1; i<argc; i++){
//                 //Way for scanning the command line arguments as they were a file's words
//                 YY_BUFFER_STATE buffer = yy_scan_string(argv[i]); 
//                 yylex();
//                 yy_delete_buffer(buffer); //Free the buffer
//             }
//         }
//     }

//     return 0;
// }


// int yywrap() {
//     return 1;
// }
