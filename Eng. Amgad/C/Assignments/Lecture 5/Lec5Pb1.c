#include <stdio.h>

float cube(float num); // Function declaration

int main() {
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);

    float result = cube(num);
    printf("The cube of %.2f is: %.2f", num, result); // Call function

    return 0;
}

float cube(float num) { 					// Function definition
    float result = num * num * num;
    return result;
}
