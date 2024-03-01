#include <stdio.h>

int main(){
	
	int num1,num2,result;
	printf("Enter The First Number:");
	scanf("%d",&num1);
	printf("Enter The Second Number:");
	scanf("%d",&num2);
	result = ((num1+num2)*3)-10;
	printf("Result = %d",result);
}