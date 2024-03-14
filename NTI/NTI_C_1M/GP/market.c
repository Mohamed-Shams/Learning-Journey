#include "market.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define FILE_NAME "System_data.txt"
#define MAX_NAME_SIZE 50
#define MAX_PRODUCTS 1000
//#define FILE_NAME "System_data.csv" /*1st create row of columns while creation*/

bool isInventoryEmpty(Product *inventory) {
    return inventory == NULL;
}

void addNewProduct(Product **inventory, Product *newItem) {
    if (isInventoryEmpty(*inventory)) {
        *inventory = newItem;
    } else {
        Product *temp = *inventory;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newItem;
    }
}

void displayAllProducts(Product *inventory) {
    if (isInventoryEmpty(inventory)) {
    FILE *filePtr = fopen(FILE_NAME, "r");

    if (filePtr == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return;
    }

    int i = 0;
    int c;

    while ((c = fgetc(filePtr)) != EOF) {
        if (c == ',' || c == '\n') {
            if (i > 0) {
               // printf("\n");
            }
            printf(",");
            i++;
            if (i == 4) {
                i = 0;
                printf("\n");
            }
        } else if (c != ' ') {  // Skip spaces
            printf("%c", c);
        }
    }

    fclose(filePtr);
}  else {
        printf("Unsaved Products Information:\n\n");
        Product *current = inventory;
        while (current != NULL) {
            printf("Product ID: %d\n", current->id);
            printf("Name: %s\n", current->name);
            printf("Price: %.2f\n", current->price);
            printf("Quantity: %d\n", current->quantity);
            printf("\n");
            current = current->next;
        }
        printf("Saved Products in file: \n");
        FILE *filePtr = fopen(FILE_NAME, "r");

    if (filePtr == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return;
    }

    int i = 0;
    int c;

    while ((c = fgetc(filePtr)) != EOF) {
        if (c == ',' || c == '\n') {
            if (i > 0) {
               // printf("\n");
            }
            printf(",");
            i++;
            if (i == 4) {
                i = 0;
                printf("\n");
            }
        } else if (c != ' ') {  // Skip spaces
            printf("%c", c);
        }
    }

    fclose(filePtr);

}
}

void saveInventoryToFile(Product *inventory) {
    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    Product *current = inventory;
    while (current != NULL) {
        //fprintf(file, "%s,%s,%s,%s\n","ID","Product","Price","Quantity");
        fprintf(file, "%d,%s,%.2f,%d\n", current->id, current->name, current->price, current->quantity);
        current = current->next;
    }
    fclose(file);
    printf("Inventory saved to file successfully.\n");
}

void loadInventoryFromFile(Product **inventory) {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("No existing inventory file found.\n");
        return;
    }


    char name[MAX_NAME_SIZE];

    Product products[MAX_PRODUCTS]; 
    int productCount = 0;

    while (fscanf(file, "%d %s %f %d\n", &products[productCount].id, name, &products[productCount].price,
                  &products[productCount].quantity) == 4) {
        products[productCount].next = NULL;
        strncpy(products[productCount].name, name, MAX_NAME_SIZE);

        productCount++;

        if (productCount >= MAX_PRODUCTS) {
            printf("Warning: Maximum number of products reached.\n");
            break;
        }
    }

    fclose(file);

    for (int i = 0; i < productCount; i++) {
        Product *newItem = (Product *)malloc(sizeof(Product));
        if (newItem == NULL) {
            printf("Memory allocation failed. Cannot load product.\n");
            return;
        }
        newItem->id = products[i].id;
        strncpy(newItem->name, products[i].name, MAX_NAME_SIZE);
        newItem->price = products[i].price;
        newItem->quantity = products[i].quantity;
        newItem->next = NULL;
        addNewProduct(inventory, newItem);
    }

    printf("Inventory loaded from file.\n");
}


void freeInventory(Product **inventory) {
    Product *current = *inventory;
    FILE *file = fopen(FILE_NAME, "w");
    fclose(file);
    while (current != NULL) {
        Product *temp = current;
        current = current->next;
        free(temp);
    }
    *inventory = NULL;
}
