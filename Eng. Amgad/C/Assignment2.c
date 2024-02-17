#include<stdio.h>

int main()
{
	/* program takes input number & bit, then 1-clear,2-toggle,3-print the required bit */
	int num,bit;
	int num1,num2,num3;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the bit number: ");
	scanf("%d",&bit);

	printf("The number after clearing bit number %d is %d\n",bit,num & ~(1<<bit));
	printf("The number after toggling bit number %d is %d\n",bit,num ^ (1<<bit));
	printf("The reqired bit is %d\n",(num & (1<<bit))>>bit);
	
	/* separate digits of number consists of 3 digits*/
	num1 = num % 10;
	num2 = (num / 10) % 10;
	num3 = num / 100;
	printf("%d\t%d\t%d",num3,num2,num1);
	return 0;
}