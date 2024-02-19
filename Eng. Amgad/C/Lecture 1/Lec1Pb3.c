#include <stdio.h>

int main(){
	float cel,fer;
	
	printf("Enter Celsius degrees:");
	scanf("%f",&cel);
	fer = (cel*(9.0/5.0))+32.0;
	printf("Fahrenheit degrees is %f",fer);

}