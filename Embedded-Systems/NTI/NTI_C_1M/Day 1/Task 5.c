/*	Task 5
	Write a C program to input number from user and find sum of all even&odd numbers between 1 to n.
*/

#include<stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(int i = 0; i<=n; i+=2)	
	{
		sum = sum+i;
	}
	printf("Sum of Even Numbers = %d",sum);
	sum = 0;
	for(int i = 1; i<=n; i+=2)	
	{
		sum = sum+i;
	}
	printf("\nSum of Odd Numbers = %d",sum);
	return 0;
}