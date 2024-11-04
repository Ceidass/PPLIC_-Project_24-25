#include "symbol_table.h"

SymbolTable* createSymbolTable() {
    SymbolTable *table = (SymbolTable*) malloc(sizeof(SymbolTable));
    table->head = NULL;
    return table;
}

void freeSymbolTable(SymbolTable *table) {
    Symbol *current = table->head;
    while (current != NULL) {
        Symbol *temp = current;
        current = current->next;
        free(temp->name);
        free(temp->type);
        if (temp->methodTable != NULL) {
            freeSymbolTable(temp->methodTable);
        }
        free(temp);
    }
    free(table);
}

Symbol* createSymbol(char *name, char *type, SymbolType symbolType) {
    Symbol *symbol = (Symbol*) malloc(sizeof(Symbol));
    symbol->name = strdup(name);
    symbol->type = strdup(type);
    symbol->symbolType = symbolType;
    symbol->next = NULL;
    symbol->methodTable = (symbolType == METHOD) ? createSymbolTable() : NULL;
    return symbol;
}

void insertSymbol(SymbolTable *table, char *name, char *type, SymbolType symbolType) {
    Symbol *symbol = createSymbol(name, type, symbolType);
    symbol->next = table->head;
    table->head = symbol;
}

Symbol* findSymbol(SymbolTable *table, char *name) {
    Symbol *current = table->head;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

char* getSymbolType(SymbolTable *table, char *name) {
    Symbol *symbol = findSymbol(table, name);
    if (symbol != NULL) {
        return symbol->type;
    }
    return NULL;
}

SymbolTable* getMethodTable(SymbolTable *table, char *name) {
    Symbol *symbol = findSymbol(table, name);
    if (symbol != NULL && symbol->symbolType == METHOD) {
        return symbol->methodTable;
    }
    return NULL;
}
