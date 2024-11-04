#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
#include "myparser.tab.h"
#include "mylexer.h"
#include <string.h>
#include <ctype.h>

//Defining the function here so the bison file knows about it
void yyerror(const char *s) {
    extern int yylineno; // provided by Flex, due to %option yylineno
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}



int isFile(const char* path){
    FILE* file = fopen(path, "r");
    
    if(file){
        fclose(file);
        return 1;
    }else{
        return 0;
    }
}

int whichKeyword(char* word){

    printf("Word %s\n",word);//debug
    int keyword = 0;

    if(strcmp(word, "class") == 0){
        keyword = CLASS;
    }else if(strcmp(word, "void") == 0){
        keyword = VOID;
    }else if(strcmp(word, "if") == 0){
        keyword = IF;
    }else if(strcmp(word, "else") == 0){
        keyword = ELSE;
    }else if(strcmp(word, "else if") == 0){
        keyword = ELIF;
    }else if(strcmp(word, "for") == 0){
        keyword = FOR;
    }else if(strcmp(word, "do") == 0){
        keyword = DO;
    }else if(strcmp(word, "while") == 0){
        keyword = WHILE;
    }else if(strcmp(word, "switch") == 0){
        keyword = SWITCH;
    }else if(strcmp(word, "case") == 0){
        keyword = CASE;
    }else if(strcmp(word, "return") == 0){
        keyword = RETURN;
    }else if(strcmp(word, "default") == 0){
        keyword = DEFAULT;
    }else if(strcmp(word, "break") == 0){
        keyword = BREAK;
    }else if(strcmp(word, "new") == 0){
        keyword = NEW;
    }else if(strcmp(word, "true") == 0){
        yylval.boolval = strdup(yytext);
        printf("Boolean %s\n", yylval.boolval); //debug
        keyword = BOOLEAN;
    }else if(strcmp(word, "false") == 0){
        yylval.boolval = strdup(yytext);
        printf("Boolean %s\n", yylval.boolval); //debug
        keyword = BOOLEAN;
    }else if(strcmp(word, "out.print") == 0){
        keyword = PRINT;
    }
    
    if(keyword!=0){ //debug
        printf("Keyword %d\n",keyword);}//debug
    
    return keyword;
}

int whichMod(char* mod){

    int modifier;

    if(strcmp(mod, "public") == 0){
        modifier = PUBLIC;
    }else if(strcmp(mod, "private") == 0){
        modifier = PRIVATE;
    }

    return modifier;
}

int whichType(char* vtype){

    int type;

    if(strcmp(vtype, "int") == 0){
        type = TYPE_INTEGER;
    }else if(strcmp(vtype, "double") == 0){
        type = TYPE_DOUBLE;
    }else if(strcmp(vtype, "boolean") == 0){
        type = TYPE_BOOLEAN;
    }else if(strcmp(vtype, "char") == 0){
        type = TYPE_CHAR;
    }else if(strcmp(vtype, "String") == 0){
        type = TYPE_STRING;
    }

    return type;    
}

// Checking if the variable id detected is actualy a keyword
int checkVarid(char* word){

    int what = VARID;

    //Removing the last character of the word if it is the character '('
    int len = strlen(word);

    // Handling the newline character if present
    if (len > 0 && word[len] == '\0') {
        if(word[--len] == '(' ){
            word[len] = '\0'; //Removing the '(' character if exists
            what = METHID;
        }
    }

    // Trim trailing spaces
    while (len > 0 && isspace((unsigned char)word[len - 1])) {
        word[--len] = '\0';
    }

    if((whichKeyword(word))){ //Checks if it is an language keyword
        what=whichKeyword(word);
        printf("ACTUAL Keyword %s:%d\n", word,what); //debug
    }

    return what;

}
