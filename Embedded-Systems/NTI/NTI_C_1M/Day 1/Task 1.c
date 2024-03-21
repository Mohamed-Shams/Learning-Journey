/* 	Task 1 
	Write C Program to design calculator that accept two 
	operands and operator than print the output of arithmetic 
	operation using switch statement.
*/

#include<stdio.h>

int main()
{
	float number1, number2;
	char operator;

	printf("Enter The First Number: ");
	scanf("%f",&number1);
	printf("Enter The Operator: ");
	scanf(" %c",&operator);
	printf("Enter The Second Number: ");
	scanf("%f",&number2);

	switch(operator)
	{
		case '+':
			printf("Sum = %.2f",number1+number2);
			break;
		case '-':
			printf("Sub = %.2f",number1-number2);
			break;
		case '*':
			printf("Mul = %.2f",number1*number2);
			break;
		case '/':
			if(number2 == 0)
			{
				printf("Can't divide by 0");
				break;
			}
			else
			{
				printf("Sub = %.2f",number1/number2);
				break;
			}
		}
	return 0;
}