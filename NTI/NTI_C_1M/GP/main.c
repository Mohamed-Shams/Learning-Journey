#include <stdio.h>
#include <stdlib.h>
#include "market.h"

int main() 
{
    
    system(CLEAR);
    printf("                                      ====================================\n");
    printf("                                                    Welcome!\n");

    int choice;
    Product *NItem = NULL;
    printf("                                          ");
    loadInventoryFromFile(&NItem);
    printf("                                      ====================================\n\n");

enterProductId:
    printf("Options are:\n");
    printf("    1 : Add Product  \n");
    printf("    2 : Show Products \n");
    printf("    3 : Save Inventory \n");
    printf("    4 : Clear Inventory\n");
    printf("    5 : Exit System\n");
    printf("Enter Option Number: \n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                system(CLEAR);
                int newProductId;
                printf("Enter Product ID. \n");
                scanf("%d", &newProductId);
                fflush(stdin);

                Product *temp = NItem;
                while (temp != NULL) {
                    if (temp->id == newProductId) {
                        printf("Error: Product ID is not unique. Please enter a unique ID.\n\n");
                        goto enterProductId;
                    }
                    temp = temp->next;
                }

                if (temp == NULL) {
                    Product *newItem = (Product *) malloc(sizeof(Product));
                    if (newItem == NULL) {
                        printf("Memory allocation failed. Cannot add product.\n");
                    } else {
                        newItem->id = newProductId;
                        printf("Enter Product Name. \n");
                        scanf("%s", newItem->name);
                        printf("Enter Product Price. \n");
                        scanf("%f", &newItem->price);
                        printf("Enter Product Quantity. \n");
                        scanf("%d", &newItem->quantity);
                        newItem->next = NULL;
                        addNewProduct(&NItem, newItem);
                    }
                }
                system(CLEAR);
            }
            break;
        case 2:
            system(CLEAR);
            displayAllProducts(NItem);
            break;
        case 3:
            system(CLEAR);
            saveInventoryToFile(NItem);
            break;
        case 4:
            system(CLEAR);
            freeInventory(&NItem);
            printf("Inventory cleared.\n");
            break;
        case 5:
            system(CLEAR);
            saveInventoryToFile(NItem);
            exit(0);
        default:
            system(CLEAR);
            printf("<<<<<<<<<<< Invalid option! >>>>>>>>>>>\n");
            break;
    }

    goto enterProductId;

    return 0;
}
