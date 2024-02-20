#include<stdio.h>

int main() {
    unsigned int num, i, p = 1;
    printf("Enter +ve Integer Number: ");
    scanf("%d", &num);

    for (i = 2; i <= (num / 2); i++) {
        p = num % i;

        if (p == 0) {
            printf("Number isn't prime");
            break; 
        }
    }

    if (p != 0) {
        printf("Number is prime");
    }

    return 0;
}
