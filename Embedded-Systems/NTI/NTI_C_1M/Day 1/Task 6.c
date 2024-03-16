/*	Task 6
	C program to count number of digits in an integer.
*/

#include<stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter The Number: ");
	scanf("%d",&n);
	while(n != 0)
	{
		sum ++;
		n/=10;
	}
	printf("number of digits = %d\n",sum);
	return 0;
}