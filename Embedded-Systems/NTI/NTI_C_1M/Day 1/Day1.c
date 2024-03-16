#include<stdio.h>

#include<float.h>
#include<limits.h>

int main()
{
	/* Sizeof */
//	printf("Range of int from %d\t to \t %d\n",INT_MIN,INT_MAX);

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/* Convert Charachters to integers */
//	char x;
//	scanf(" %c",&x);
//	printf("The charachter is %c the int is %d\n",x,x);

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/*return quotient and reminder of division*/
//	int num1,num2;
//	printf("Enter The 1st Number: ");
//	scanf("%d",&num1);
//	printf("Enter The 2nd Number: ");
//	scanf("%d",&num2);
//	printf("The quotient of num1/num2 is %d, the reminder is %d",num1/num2,num1%num2);

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	
	/*Swap between 2 numbers*/
//	int x=5,y=6,temp=0;
//	printf("x before = %d, y before = %d\n", x,y);

	// 1st method --> Using temp
//	temp = x;
//	x = y;
//	y = temp;
//	printf("x after = %d, y after = %d\n", x,y);

	//2nd method --> Using +-
//	temp = y + x;
//	y = temp - y;
//	x = temp - x;
//	printf("x after = %d, y after = %d\n", x,y);

	//3rd method --> Using */
//	temp = y * x;
//	y = temp/y;
//	x = temp/x;
//	printf("x after = %d, y after = %d\n", x,y);

	//4th method --> Using Bitwise operator
//	temp = y ^ x;
//	x = temp ^ x;
//	y = temp ^ y;
//	printf("x after = %d, y after = %d\n", x,y);

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/*Degree Calc*/
/*	float degree;
	printf("Enter Student's degree: ");
	scanf("%f",&degree);
	if(degree<=50)
	{
		printf("Failed\n");
	}
	else if(degree<=65)
	{
		printf("D\n");
	}
	else if(degree<=75)
	{
		printf("Good\n");
	}
	else if(degree<=85)
	{
		printf("Very Good\n");
	}
	else if(degree<=100)
	{
		printf("Excellent\n");
	}
	else
	{
		printf("Invalid Input\n");
	}
*/
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/*Calculator*/
/*	char sign;
	float num1,num2;
	printf("Enter Num1: ");
	scanf("%f",&num1);
	printf("Enter Num2: ");
	scanf("%f",&num2);

	
		printf("\nEnter The sign: ");
		scanf(" %c",&sign);

			if(sign == '+')
		{
			printf("Sum = %f", num1+num2);
		}
		else if(sign == '-')
		{
			printf("Sub = %f",num1-num2);
		}
		else if(sign == '*')
		{
			printf("Mul = %f",num1*num2);
		}
		else if(sign == '/')
		{
		  if(num2 == 0)
			{
				printf("Invalid Num2");
			}
		   else
  		   {
                       printf("Div = %f",num1/num2);
   		  }
			
		}
		else
		{
			printf("Invalid Sign");
		}
	
*/

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/* Max Number Of 3 Numbers */
/*	float num1,num2,num3;
	printf("Enter The 3 Numbers:\n");
	scanf("%f %f %f",&num1,&num2,&num3);

	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("num1: %f is the max number",num1);
		}
		else
		{
			printf("num3: %f is the max number",num3);
		}
	}
	else if(num2>num3)
	{
		if(num2>num1)
		{
			printf("num2: %f is the max number",num2);
		}
		else
		{
			printf("num1: %f is the max number",1);
		}
	}
	else
	{
		printf("num3: %f is the max number",num3);
	}
*/

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/* Factorial */
/*	int n,fact = 1;
	printf("Enter Number: ");
	scanf("%d",&n);
	for(int i = n; i>=1; i--)
	{
		fact = fact * i;
	}
	printf("%d",fact);
*/
	return 0;
}
