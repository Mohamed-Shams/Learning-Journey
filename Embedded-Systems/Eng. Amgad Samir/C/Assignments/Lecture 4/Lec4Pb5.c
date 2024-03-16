#include<stdio.h>

int main() {
    int num, reminder,reverse=0;
    printf("Enter a Number: ");
    scanf("%d", &num);

   /* while(num != 0) {
		
		reminder = num%10;
		reverse = (reverse*10) + reminder;
		num = num/10;
        
    }
	
	printf("%d is the reverse of input",reverse);   
    */
	
	for( ;num != 0; num/=10) {
		
		reminder = num%10;
		reverse = (reverse*10)+reminder;
        
    }
	
	printf("%d is the reverse of input",reverse);   
	
    return 0;
}
