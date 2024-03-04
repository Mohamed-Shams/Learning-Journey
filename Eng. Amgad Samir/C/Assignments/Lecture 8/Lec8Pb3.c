#include <stdio.h>

void swap(int arr1[], int arr2[], int size);

int main() {
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    
    int arr1[size];
    int arr2[size];
    
    // Input elements for array 1
    printf("Enter elements for array 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element number %d of array 1: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    // Input elements for array 2
    printf("Enter elements for array 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element number %d of array 2: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    printf("\nArrays before swapping:\n");
    printf("Array 1:\tArray 2:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t\t%d\n", arr1[i], arr2[i]);
    }
    
    swap(arr1, arr2, size);
    
    return 0;
}

void swap(int arr1[], int arr2[], int size) {
    int temp[size];
    
    // Swap the arrays using a temporary array
    for (int i = 0; i < size; i++) {
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }
    
    printf("\nArrays after swapping:\n");
    printf("Array 1:\tArray 2:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t\t%d\n", arr1[i], arr2[i]);
    }
}
