#include<stdio.h>

int cube(int);
int convertDecToBin(int);
void ifPrime(int);
int main()
{
	/*Functions*/

	/*Cube of number*/
	int x = 5;
	printf("Cube = %d\n",cube(x));
	/*Convert DEC To BIN*/
	printf("Binary of x = %d\n",convertDecToBin(x));
	/*Check if Primary or Not*/
	ifPrime(5);
	/*Print All Primary Numbers*/
	allPrime(10);
/*====================================================================*/

	return 0;
}

int cube(int x)
{
	return x*x*x;
}
int convertDecToBin(int x)
{
	int bin = 0;

	while(x != 0)
	{
		bin = bin*10 + x%2;
		x = x >> 1;
	}
	return bin;
}

void ifPrime(int x)
{
	int flag=0;
	if (x == 1)
	{
		flag = 0;
	}
	else
	{
		for(int i = 2; i<x ;i++)
	{
		if(x%i == 0)
		{
			flag = 1; //NotPrime
			break;
		}
	}
	}
		if(flag == 1)
	{
		printf("\n%d is Not Prime",x);	
	}
	else
	{
		printf("\n%d is Prime",x);	
	}
}

void allPrime(int x)
{
	int flag = 0;
	if (x == 1)
	{
		printf("\n%d",x);
	}
	else
	{
		for(int i = 1; i < x; i++)
		{
			ifPrime(i); //can be edited to only print prime numbers
		}
	}
}