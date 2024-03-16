/*	Task 4
	Write a C program to print all even&odd numbers between 1 to 100.
	using while loop and conditional statment.
*/

#include<stdio.h>

int main()
{
	for(int i = 1; i<=100; i++)	
	{
		if((i%2) == 0)
		{
			printf("\n %d is Even",i);
		}
		if((i%2) != 0)
		{
			printf("\t %d is Odd",i);
		}
	}
	return 0;
}