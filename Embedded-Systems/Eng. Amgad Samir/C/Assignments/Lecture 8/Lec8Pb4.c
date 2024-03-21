#include <stdio.h>

// Function prototype
void reverse(int arr[], int size);

int main() {
    int size;

    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    int arr[size];

    // Input elements into the array
    for (int i = 0; i < size; i++) {
        printf("Enter Element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Before Reversing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    // Call the reverse function
    reverse(arr, size);
    
    return 0;
}

// Function to reverse the array elements
void reverse(int arr[], int size) {
    int flag;
    // Iterate through the first half of the array
    for (int i = 0; i < size / 2; i++) {
        // Swap elements using a temporary flag
        flag = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = flag;
    }

    printf("\nArray After Reversing: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}
