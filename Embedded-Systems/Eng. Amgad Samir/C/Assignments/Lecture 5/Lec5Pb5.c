/* //Method1
#include <stdio.h>

int CheckPower(int num);

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int result = CheckPower(num);

    if (result == 1) {
        printf("%d is a power of 2.\n", num);
    } else if (result == 2) {
        printf("%d is a power of 3.\n", num);
    } else {
        printf("%d is neither a power of 2 nor a power of 3.\n", num);
    }

    return 0;
}

int CheckPower(int num) {
 int powerOf2 = 0, powerOf3 = 0;

    if (num > 1) {
        while (num % 2 == 0) {
            num /= 2;
            powerOf2 = 1;
        }

        while (num % 3 == 0) {
            num /= 3;
            powerOf3 = 1;
        }

        if (num == 1) {
            if (powerOf2 && powerOf3) {
                return 3; 
            } else if (powerOf2) {
                return 1; 
            } else if (powerOf3) {
                return 2; 
            }
        }
    } else if (num <= 1) {
        return 3; 
    }

    return 0; 
}*/
/* //Method2
#include <stdio.h>

int CheckPower(int num);

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int result = CheckPower(num);

    if (result == 1) {
        printf("%d is a power of 2.\n", num);
    } else if (result == 2) {
        printf("%d is a power of 3.\n", num);
    } else {
        printf("%d is neither a power of 2 nor a power of 3.\n", num);
    }

    return 0;
}

int CheckPower(int num) {
 int num2 = num,num3=num;

    if (num > 1) {
		
		while(num2%2==0){
			num2/=2;
		}
		if(num2 == 1){
			return 1;
		}
		
		while(num3%3==0){
			num3/=3;
		}
		if(num3 == 1){
			return 2;
		}
		
	else if (num <= 1) {
        return 3; 
    }

    return 0; 
}
*/