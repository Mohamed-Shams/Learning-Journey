#include <stdio.h>

// Function to sort the array using selection sort
void sortfunc(int arr[], int size);

int main() {
    int Arr[6], i;

    // Input phase
    for (i = 0; i <= 5; i++) {
        printf("Add Element [%d]: ", i + 1);
        scanf("%d", &Arr[i]);
    }

    printf("\n");

    printf("Array before Sorting: ");
    // Display array before sorting
    for (i = 0; i <= 5; i++) {
        printf("%d \t", Arr[i]);
    }
    printf("\n");

    // Call the sorting function
    sortfunc(Arr, 6);

    printf("\n");
    printf("Time Complexity T(n) = O(n^2)");

    return 0;
}

// Function to perform selection sort on the array
void sortfunc(int arr[], int size) {
    int i, j, index, min;

    // Selection sort algorithm
    for (i = 0; i < size; i++) {
        index = i;
        min = arr[i]; // Initialize min with the current element
        
        for (j = i; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }

        // Swap the minimum element with the current element
		if( i != index){ //To reduce time
		    int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
    }

    printf("Array after Sorting: ");
    // Display array after sorting
    for (i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
}
