#ifndef FUNCS_H
#define FUNCS_H

int yylex(void);

// Checking if an argument is a file or not
int isFile(const char* path);

// Returns to Bison the specific keyword
int whichKeyword(char* word);

// Returns to Bison the specific variable type (int | double | boolean | char | String)
int whichType(char* vtype);

// Returns to Bison the specific modifier (public | private)
int whichMod(char* mod);

// Checking if the variable id detected is actually a keyword
int checkVarid(char* word);

// Declaring the function here so the Bison file knows about it
void yyerror(const char *s, ...);

#endif // FUNCS_H
