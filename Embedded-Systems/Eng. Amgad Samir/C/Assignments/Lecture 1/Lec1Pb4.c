#include <stdio.h>

int main(){
	
	float radius,area,circumference,pi=3.1415;
	
	printf("Enter The Radius of The Circle: ");
	scanf("%f",&radius);
	area = pi*(radius*radius);
	circumference = 2*pi*radius;
	printf("Area= %f \nCircumference= %f",area,circumference);
}