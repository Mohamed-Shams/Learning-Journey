#include<stdio.h>

int main()
{
	/* program takes 2 ints print result */
	int num1,num2;
	printf("Enter the 1st number: ");
	scanf("%d",&num1);
	printf("Enter the 2nd number: ");
	scanf("%d",&num2);
	printf("Result = %d",(((num1-num2))*3)-10);

	/* Similar Problems>>>>.. */
	return 0;
}