/*	Task 3
	Write a C program to find the sum of all natural numbers between 1 to n using for loop.
*/

#include<stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(int i = n; i>=1; i--)	
	{
		sum = sum + i;
	}
	printf("Sum of numbers from 1 to %d = %d\n",n,sum);
	return 0;
}