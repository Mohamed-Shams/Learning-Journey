#include<stdio.h>

int main() {
    int num, i,p=1;
    printf("Enter +ve Integer Number: ");
    scanf("%d", &num);

    for (i = 1; i*i <= num; i++) {
		
        if (num == i*i) {
            printf("%d is perfect square",num);
			p = 0;
			break;
        }

    }
	if(p != 0){
	printf("%d is not perfect square",num);   
    }



    return 0;
}
