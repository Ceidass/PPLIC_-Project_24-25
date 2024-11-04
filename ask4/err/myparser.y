%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
#include "mylexer.h"

extern int yylineno;
extern char *yytext;

typedef struct {
    int line;
    char *text;
    char *message;
} SyntaxError;

#define MAX_ERRORS 100
SyntaxError errors[MAX_ERRORS];
int error_count = 0;

%}

%locations

%union {
    int intval;
    double doubleval;
    char* boolval;
    char charval;
    char* stringval;
}

%token CLASS VOID PRINT IF ELSE ELIF FOR DO WHILE SWITCH CASE DEFAULT BREAK RETURN NEW BTRUE BFALSE
%token COLON SCOLON DOT COMMA STHAN BTHAN LBRACK RBRACK LCURL RCURL LPAR RPAR PLUS MINUS MULT DIV ASSIGN ISEQ ISNEQ BOOLOR BOOLAND
%token SPACE NLINE
%token SQUOTE DQUOTE
%token OLC MLC
%token PRIVATE PUBLIC
%token TYPE_INTEGER TYPE_DOUBLE TYPE_BOOLEAN TYPE_CHAR TYPE_STRING
%token CLASSID METHID VARID
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

%%
// Here, we define our grammar rules

program: class 
       | class program
       | error { yyerror("Syntax error in program"); yyerrok; } program
    ;

class: PUBLIC CLASS CLASSID LCURL class_members RCURL 
     | error { yyerror("Syntax error in class declaration"); yyerrok; } RCURL
    ;

class_members: /*empty*/ 
             | class_member class_members
             | error { yyerror("Syntax error in class members"); yyerrok; } class_members
    ;

class_member: variable_declaration SCOLON
            | method_declaration
            | class
            | error { yyerror("Syntax error in class member"); yyerrok; } SCOLON
    ;

variable_declaration: vartype VARID optional_assignment more_declarations
                    | modifier vartype VARID optional_assignment more_declarations
    ;

optional_assignment: /*empty*/
                   | ASSIGN expression
    ;

more_declarations: /*empty*/
                 | COMMA VARID optional_assignment more_declarations
    ;

method_declaration: method_type METHID parameter_list RPAR LCURL method_definition RCURL
                  | modifier method_type METHID parameter_list RPAR LCURL method_definition RCURL
                  | method_type METHID parameter_list RPAR LCURL RCURL
                  | modifier method_type METHID parameter_list RPAR LCURL RCURL
                  | error { yyerror("Syntax error in method declaration"); yyerrok; } RCURL
    ;

method_definition: statements
    ;

modifier: PUBLIC
        | PRIVATE
    ;

vartype: TYPE_INTEGER
       | TYPE_DOUBLE
       | TYPE_BOOLEAN
       | TYPE_CHAR
       | TYPE_STRING
       | CLASSID
    ;

method_type: vartype
            | VOID
    ;

parameter_list: /*empty*/
              | vartype VARID
              | vartype VARID COMMA parameter_list
    ;

statements: /*empty*/ 
          | statement statements
          | error { yyerror("Syntax error in statements"); yyerrok; } statements
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
         | error { yyerror("Syntax error in statement"); yyerrok; } SCOLON
    ;

assignment_statement: VARID ASSIGN expression
                    | variable_call_statement ASSIGN expression
    ;

expression: literal
          | variable_call_statement
          | method_call_statement
          | VARID
          | LPAR expression RPAR
          | expression operator expression 
          | error { yyerror("Syntax error in expression"); yyerrok; }
    ;

operator: PLUS
        | MINUS
        | MULT
        | DIV
    ;

method_call_statement: CLASSID DOT METHID argument_list RPAR
    ;

variable_call_statement: CLASSID DOT VARID
                       | VARID DOT VARID
    ;

argument_list: /*empty*/
              | expression
              | expression COMMA argument_list
              | error { yyerror("Syntax error in argument list"); yyerrok; }
    ;

object_creation_statement: CLASSID VARID ASSIGN NEW CLASSID LPAR RPAR
    ;

loop_statement: do_while_loop
              | for_loop
              | error { yyerror("Syntax error in loop statement"); yyerrok; }
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
                 | error { yyerror("Syntax error in control statement"); yyerrok; }
    ;

if_statement: IF condition RPAR LCURL statements RCURL elseif_statement else_statement
    ;

elseif_statement: /*empty*/
                | ELIF LPAR condition RPAR LCURL statements RCURL elseif_statement 
                | error { yyerror("Syntax error in elseif statement"); yyerrok; } RCURL
    ;

else_statement: /*empty*/
              | ELSE LCURL statements RCURL 
              | error { yyerror("Syntax error in else statement"); yyerrok; } RCURL
    ;

switch_statement: SWITCH expression RPAR LCURL case_statement RCURL
    ;

case_statement: /*empty*/ 
              | CASE literal COLON statements case_statement default_statement
              | CASE literal COLON statements case_statement
              | error { yyerror("Syntax error in case statement"); yyerrok; } COLON
    ;

default_statement: DEFAULT COLON statements
                 | error { yyerror("Syntax error in default statement"); yyerrok; } COLON
    ;

print_statement: PRINT LPAR print_parameters RPAR
               | error { yyerror("Syntax error in print statement"); yyerrok; } RPAR
    ;

print_parameters: STRING
                | STRING COMMA VARID
                | error { yyerror("Syntax error in print parameters"); yyerrok; }
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

condition: expression comparison_operator expression
         | LPAR expression comparison_operator expression RPAR
         | condition logical_operator condition
         | LPAR condition logical_operator condition RPAR
         | error { yyerror("Syntax error in condition"); yyerrok; }
    ;

comparison_operator: BTHAN
                   | STHAN
                   | ISEQ
                   | ISNEQ
    ;

logical_operator: BOOLAND 
                | BOOLOR
    ;

%%




int main(int argc, char **argv){
    int parse_result;

    if (argc > 1) {
        if (argc == 2 && isFile(argv[1])) {
            yyin = fopen(argv[1], "r");
            parse_result = yyparse(); //Returns 0 in success

            if (parse_result == 0) {
                printf("Parsing completed successfully.\n");
            } else {
                printf("Parsing failed.\n");
            }
            fclose(yyin); //Close the file after parsing it
        } else {
            printf("Not a file\n");
            exit(EXIT_FAILURE);
        }
    }

    print_errors();

    // Free allocated memory for error messages
    for (int i = 0; i < error_count; i++) {
        free(errors[i].text);
        free(errors[i].message);
    }

    return 0;
}

int yylex(void);
