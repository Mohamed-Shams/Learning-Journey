#include <stdio.h>
/* // another solution 

#include <stdio.h>

float Operation(float num1,float num2);																				 


int main(){
	float num1,num2;
	printf("Enter The 1st number: ");
	scanf("%f",&num1);
	printf("Enter The 2nd number: ");
	scanf("%f",&num2);
	printf("Result is: %f",Operation(num1,num2));
	
	return 0;
}

float Operation(float num1,float num2){	
	float ope,div;
	char op;
	printf("Enter The Operation between [+ - * /]: ");
	scanf(" %c",&op);	
	
switch(op){
		case '+':
			ope = num1 + num2;
			break;
		case '-':
			ope = num1 - num2;
			break;
		case '*':
			ope = num1 * num2;
			break;		
		case '/':
			ope = num1 / num2;
			break;	
		default: printf("Wrong Operation\n");
			
}
	return ope;
}

*/

float Add(float num1,float num2);																				 
float Sub(float num1,float num2);
float Mul(float num1,float num2);
float Div(float num1,float num2);

int main(){
	float num1,num2,add,sub,mul,div;
	char op;
	printf("Enter The 1st number: ");
	scanf("%f",&num1);
	printf("Enter The 2nd number: ");
	scanf("%f",&num2);
	printf("Enter The Operation between [+ - * /]: ");
	scanf(" %c",&op);
	
	switch(op){
		case '+':
			add = Add(num1,num2);
			printf("Addition of %.2f + %.2f is: %.2f",num1,num2,add);
			break;
		case '-':
			sub = Sub(num1,num2);
			printf("Subtraction of %.2f - %.2f is: %.2f",num1,num2,sub);
			break;
		case '*':
			mul = Mul(num1,num2);
			printf("Multiplication of %.2f * %.2f is: %.2f",num1,num2,mul);
			break;		
		case '/':
			div = Div(num1,num2);
			printf("Division of %.2f / %.2f is: %.2f",num1,num2,div);
			break;	
		default: printf("Wrong Operation");
			
}
	return 0;
}
float Add(float num1,float num2){																				
		float add = num1+num2;
		return add;
}
float Sub(float num1,float num2){																				
		float sub = num1-num2;
		return sub;
}
float Mul(float num1,float num2){																				
		float mul = num1*num2;
		return mul;
}
float Div(float num1,float num2){																				
		float div = num1/num2;
		return div;
}
