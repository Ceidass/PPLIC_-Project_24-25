%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "funcs.h"
#include "mylexer.h"
#include "symbol_table.h"

SymbolTable *symbolTable;
SymbolTable *currentClassMethodTable = NULL;

void yyerror(const char *s, ...);
int yylex(void);

%}

%union {
    int intval;
    double doubleval;
    char* boolval;
    char charval;
    char* stringval;
    char* type;
    char* cid;
    char* mid;
    char* vid;
}

%token CLASS VOID PRINT IF ELSE ELIF FOR DO WHILE SWITCH CASE DEFAULT BREAK RETURN NEW BTRUE BFALSE
%token COLON SCOLON DOT COMMA STHAN BTHAN LBRACK RBRACK LCURL RCURL LPAR RPAR PLUS MINUS MULT DIV ASSIGN ISEQ ISNEQ BOOLOR BOOLAND
%token SPACE NLINE
%token SQUOTE DQUOTE
%token OLC MLC
%token PRIVATE PUBLIC
%token TYPE_INTEGER TYPE_DOUBLE TYPE_BOOLEAN TYPE_CHAR TYPE_STRING
%token <cid> CLASSID 
%token <mid> METHID 
%token <vid> VARID
%token <intval> INTEGER 
%token <doubleval> DOUBLE
%token <boolval> BOOLEAN
%token <charval> CHAR
%token <stringval> STRING
%type <intval> intliteral
%type <doubleval> doubleliteral
%type <boolval> booliteral
%type <charval> charliteral
%type <stringval> stringliteral
%type <type> vartype
%type <cid> cidliteral
%type <mid> midliteral 
%type <vid> vidliteral

%%

program: class_list
       ;

class_list: class
          | class class_list
          ;

class: PUBLIC CLASS CLASSID LCURL class_members RCURL {
          currentClassMethodTable = getMethodTable(symbolTable, $3);
      }
     ;

class_members: /*empty*/ 
             | class_member class_members
             ;

class_member: variable_declaration SCOLON 
            | method_declaration
            | class
            ;

variable_declaration: vartype VARID optional_assignment more_declarations {
                        if (findSymbol(symbolTable, $2)) {
                            yyerror("Variable '%s' already declared.", $2);
                        } else {
                            insertSymbol(symbolTable, $2, $1, VAR);
                        }
                      }
                    | modifier vartype VARID optional_assignment more_declarations {
                        if (findSymbol(symbolTable, $3)) {
                            yyerror("Variable '%s' already declared.", $3);
                        } else {
                            insertSymbol(symbolTable, $3, $2, VAR);
                        }
                      }
                    ;

optional_assignment: /*empty*/
                   | ASSIGN expression {
                       if (strcmp(getSymbolType(symbolTable, $2), $3) != 0) {
                           yyerror("Type mismatch in assignment.");
                       }
                     }
                   ;

more_declarations: /*empty*/
                 | COMMA VARID optional_assignment more_declarations {
                     if (findSymbol(symbolTable, $2)) {
                         yyerror("Variable '%s' already declared.", $2);
                     } else {
                         insertSymbol(symbolTable, $2, $1, VAR);
                     }
                   }
                 ;

method_declaration: method_type METHID parameter_list RPAR LCURL method_definition RCURL {
                       if (findSymbol(currentClassMethodTable, $2)) {
                           yyerror("Method '%s' already declared.", $2);
                       } else {
                           insertSymbol(currentClassMethodTable, $2, $1, METHOD);
                       }
                   }
                  | modifier method_type METHID parameter_list RPAR LCURL method_definition RCURL {
                       if (findSymbol(currentClassMethodTable, $3)) {
                           yyerror("Method '%s' already declared.", $3);
                       } else {
                           insertSymbol(currentClassMethodTable, $3, $2, METHOD);
                       }
                   }
                  | method_type METHID parameter_list RPAR LCURL RCURL {
                       if (findSymbol(currentClassMethodTable, $2)) {
                           yyerror("Method '%s' already declared.", $2);
                       } else {
                           insertSymbol(currentClassMethodTable, $2, $1, METHOD);
                       }
                   }
                  | modifier method_type METHID parameter_list RPAR LCURL RCURL {
                       if (findSymbol(currentClassMethodTable, $3)) {
                           yyerror("Method '%s' already declared.", $3);
                       } else {
                           insertSymbol(currentClassMethodTable, $3, $2, METHOD);
                       }
                   }
                  ;

method_definition: statements
                 ;

modifier: PUBLIC
        | PRIVATE
        ;

vartype: TYPE_INTEGER { $$ = "int"; }
       | TYPE_DOUBLE { $$ = "double"; }
       | TYPE_BOOLEAN { $$ = "boolean"; }
       | TYPE_CHAR { $$ = "char"; }
       | TYPE_STRING { $$ = "string"; }
       | CLASSID { $$ = $1; }
       ;

method_type: vartype
           | VOID
           ;

parameter_list: /*empty*/
              | vartype VARID {
                  if (findSymbol(symbolTable, $2)) {
                      yyerror("Parameter '%s' already declared.", $2);
                  } else {
                      insertSymbol(symbolTable, $2, $1, VAR);
                  }
                }
              | vartype VARID COMMA parameter_list {
                  if (findSymbol(symbolTable, $2)) {
                      yyerror("Parameter '%s' already declared.", $2);
                  } else {
                      insertSymbol(symbolTable, $2, $1, VAR);
                  }
                }
              ;

statements: /*empty*/ 
          | statement statements
          ;

statement: variable_declaration SCOLON
         | assignment_statement SCOLON
         | method_call_statement SCOLON
         | object_creation_statement SCOLON
         | loop_statement
         | control_statement
         | print_statement SCOLON
         | return_statement SCOLON
         | break_statement SCOLON
         ;

assignment_statement: VARID ASSIGN expression {
                        char *varType = getSymbolType(symbolTable, $1);
                        if (!varType) {
                            yyerror("Variable '%s' not declared.", $1);
                        } else if (strcmp(varType, $3) != 0) {
                            yyerror("Type mismatch in assignment.");
                        }
                      }
                    | variable_call_statement ASSIGN expression
                    ;

expression: literal {
              $$ = $1;
            }
          | variable_call_statement {
              $$ = getSymbolType(symbolTable, $1);
            }
          | method_call_statement
          | VARID {
              char *varType = getSymbolType(symbolTable, $1);
              if (!varType) {
                  yyerror("Variable '%s' not declared.", $1);
              } else {
                  $$ = varType;
              }
            }
          | LPAR expression RPAR {
              $$ = $2;
            }
          | expression operator expression {
              if (strcmp($1, $3) != 0) {
                  yyerror("Type mismatch in expression.");
              } else {
                  $$ = $1; // assuming operators return the same type as operands
              }
            }
          ;

operator: PLUS
        | MINUS
        | MULT
        | DIV
        ;

method_call_statement: CLASSID DOT METHID argument_list RPAR {
                          SymbolTable *classMethodTable = getMethodTable(symbolTable, $1);
                          if (!classMethodTable || !findSymbol(classMethodTable, $3)) {
                              yyerror("Method '%s' not declared in class '%s'.", $3, $1);
                          }
                      }
                     | VARID DOT METHID argument_list RPAR {
                          char *varType = getSymbolType(symbolTable, $1);
                          SymbolTable *classMethodTable = getMethodTable(symbolTable, varType);
                          if (!classMethodTable || !findSymbol(classMethodTable, $3)) {
                              yyerror("Method '%s' not declared in variable '%s' of type '%s'.", $3, $1, varType);
                          }
                      }
                     ;

variable_call_statement: CLASSID DOT VARID
                       | VARID DOT VARID
                       ;

argument_list: /*empty*/
             | expression
             | expression COMMA argument_list
             ;

object_creation_statement: CLASSID VARID ASSIGN NEW CLASSID LPAR RPAR {
                             if (strcmp($1, $5) != 0) {
                                 yyerror("Type mismatch in object creation.");
                             } else {
                                 insertSymbol(symbolTable, $2, $1, VAR);
                             }
                          }
                         ;

loop_statement: do_while_loop
              | for_loop
              ;

do_while_loop: DO LCURL statements RCURL WHILE condition RPAR SCOLON
             ;

for_loop: FOR for_exp_1 SCOLON condition SCOLON for_exp_2 RPAR LCURL for_body RCURL
        ;

for_body: statements
        ;

for_exp_1: vartype assignment_statement
         | assignment_statement
         ;

for_exp_2: assignment_statement
         | prefix_op
         | postfix_op
         ;

prefix_op: PLUS PLUS VARID
         | MINUS MINUS VARID
         | PLUS PLUS variable_call_statement
         | MINUS MINUS variable_call_statement 
         ;

postfix_op: VARID PLUS PLUS
          | VARID MINUS MINUS
          | variable_call_statement PLUS PLUS
          | variable_call_statement MINUS MINUS
          ;

control_statement: if_statement
                 | switch_statement
                 ;

if_statement: IF condition RPAR LCURL statements RCURL elseif_statement else_statement
            ;

elseif_statement: /*empty*/
                | ELIF LPAR condition RPAR LCURL statements RCURL elseif_statement 
                ;

else_statement: /*empty*/
              | ELSE LCURL statements RCURL 
              ;

switch_statement: SWITCH expression RPAR LCURL case_statement RCURL
                ;

case_statement: /*empty*/ 
              | CASE literal COLON statements case_statement default_statement
              | CASE literal COLON statements case_statement
              ;

default_statement: DEFAULT COLON statements
                 ;

print_statement: PRINT LPAR print_parameters RPAR
               ;

print_parameters: STRING
                | STRING COMMA VARID
                ;

return_statement: RETURN
                | RETURN expression
                ;

break_statement: BREAK
               ;

literal: intliteral 
       | doubleliteral
       | booliteral
       | charliteral
       | stringliteral
       ;

intliteral: INTEGER { $$ = $1; printf("Parsed integer: %d\n", $1); }
          ;

doubleliteral: DOUBLE { $$ = $1; printf("Parsed double: %f\n", $1); }
             ;

booliteral: BOOLEAN { $$ = $1; printf("Parsed boolean: %s\n", $1); }
          ;

charliteral: CHAR { $$ = $1; printf("Parsed character: %c\n", $1); }
           ;

stringliteral: STRING { $$ = $1; printf("Parsed String: %s\n", $1); }
             ;

condition: expression comparison_operator expression {
              if (strcmp($1, $3) != 0) {
                  yyerror("Type mismatch in condition.");
              }
          }
         | LPAR expression comparison_operator expression RPAR {
              if (strcmp($2, $4) != 0) {
                  yyerror("Type mismatch in condition.");
              }
          }
         | condition logical_operator condition
         | LPAR condition logical_operator condition RPAR
         ;

comparison_operator: BTHAN
                   | STHAN
                   | ISEQ
                   | ISNEQ
                   ;

logical_operator: BOOLAND | BOOLOR
                ;

%%

int main(int argc, char **argv){

    symbolTable = createSymbolTable();

    int parse_result;

    yydebug = 1; // Enable debugging

    if(argc>1){
        if(argc==2 && isFile(argv[1])){
            yyin = fopen(argv[1], "r");
            parse_result = yyparse(); //Returns 0 on success

            if(parse_result == 0){
                printf("Parsing completed successfully.\n");
            }else{
                printf("Parsing failed.\n");
                fclose(yyin);  // Close the file after finding an error in parsing
                freeSymbolTable(symbolTable);
                exit(EXIT_FAILURE);
            }
            fclose(yyin); // Close the file after parsing it
        }else{
            printf("Not a file\n");
            freeSymbolTable(symbolTable);
            exit(EXIT_FAILURE);
        }
    }

    freeSymbolTable(symbolTable);

    return 0;
}

void yyerror(const char *s, ...) {
    va_list ap;
    va_start(ap, s);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
    va_end(ap);
}
