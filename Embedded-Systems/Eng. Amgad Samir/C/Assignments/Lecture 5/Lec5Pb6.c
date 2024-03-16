#include <stdio.h>

int countOnesInBinary(int num);
int convertToBinary(int num);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
	
    int onesCount = countOnesInBinary(num);
    int binaryValue = convertToBinary(num);
    printf("The number of ones in %d [%d] is: %d", num, binaryValue, onesCount);

    return 0;
}

int countOnesInBinary(int num) {
    int ones = 0;
    while (num) {
        if (num % 2 == 1) {
            ones++;
        }
        num /= 2;
    }
    return ones;
}

int convertToBinary(int num) {
    int binary = 0, remainder, base = 1;
    while (num) {
        remainder = num % 2;
        binary += remainder * base;
        num /= 2;
        base *= 10;
    }
    return binary;
}
