#include <stdio.h>

// Function prototype
int total(int arr[], int size);

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array of the specified size
    int arr[size];
    
    // Input elements into the array
    for (int i = 0; i < size; i++) {
        printf("Enter element number %d: ", i + 1);
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    
    // Calculate and display the sum using the total function
    printf("The sum of the integer array = %d", total(arr, size));
    
    return 0;
}

// Function to calculate the sum of array elements
int total(int arr[], int size) {
    int sum = 0;
    
    // Iterate through the array and accumulate the sum
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    
    return sum;
}
