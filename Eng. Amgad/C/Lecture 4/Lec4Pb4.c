#include<stdio.h>

int main() {
    float num, i,p,mul=1.0;
    printf("Enter Integer Number: ");
    scanf("%f", &num);
	printf("Enter Integer Power: ");
    scanf("%f", &p);


	if(p<0){
		for (i = p; i < 0; i++) {
		
        mul = mul*num;
	}
	}
	else {
		for (i = 1.0; i <= p; i++) {
		
        mul = mul*num;
	}
	}

    
	if(p<0){
	printf("%f ^ %f = %f",num,p,1/mul);   
    }
	else {
		printf("%.1f ^ %.1f = %.1f",num,p,mul);
	}


    return 0;
}
