#include <stdio.h>

int Last(int arr[], int size);
int num;  // Global variable to store the number to search for

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("Enter element number %d of the array: ", i + 1);
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    
    printf("Enter the number to search for: ");
    scanf("%d", &num);

    printf("The index of the LAST occurrence of number %d is [%d]", num, Last(arr, size));
    
    return 0;
}

int Last(int arr[], int size) {
    int last = -1;  // Initialize last occurrence index to -1 (not found)
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            last = i;  // Update last occurrence index when number is found
        }
    }
    
    return last;
}
