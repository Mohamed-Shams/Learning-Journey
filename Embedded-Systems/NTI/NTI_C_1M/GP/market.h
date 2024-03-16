#ifndef MARKET_H
#define MARKET_H

#include <stdbool.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

typedef struct Product {
    int id;
    char name[100];
    float price;
    int quantity;
    struct Product *next;
} Product;

bool isInventoryEmpty(Product *inventory);

void addNewProduct(Product **inventory, Product *newItem);

void displayAllProducts(Product *inventory);

void saveInventoryToFile(Product *inventory);

void loadInventoryFromFile(Product **inventory);

void freeInventory(Product **inventory);

#endif
