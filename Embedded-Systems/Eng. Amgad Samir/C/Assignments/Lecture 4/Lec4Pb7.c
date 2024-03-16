#include<stdio.h>

int main() {
    int num, i,j;
    printf("Enter Number of Rows: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--) {
		
        for (j = 1; j <= i; j++) {
				printf("*");
        }
		printf("\n");
    }
	



    return 0;
}
