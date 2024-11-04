#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdlib.h>
#include <string.h>

typedef enum { VAR, METHOD } SymbolType;

typedef struct Symbol {
    char *name;
    char *type;
    SymbolType symbolType;
    struct Symbol *next;
    struct SymbolTable *methodTable; // For classes to store methods
} Symbol;

typedef struct SymbolTable {
    Symbol *head;
} SymbolTable;

// Function prototypes
SymbolTable* createSymbolTable();
void freeSymbolTable(SymbolTable *table);
Symbol* createSymbol(char *name, char *type, SymbolType symbolType);
void insertSymbol(SymbolTable *table, char *name, char *type, SymbolType symbolType);
Symbol* findSymbol(SymbolTable *table, char *name);
char* getSymbolType(SymbolTable *table, char *name);
SymbolTable* getMethodTable(SymbolTable *table, char *name);

#endif // SYMBOL_TABLE_H
