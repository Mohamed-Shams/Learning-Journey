#include<stdio.h>
#include<math.h>

int main(){
	
	float num1,num2,fsum;
	int isum;
	
	printf("Enter the 1st and the 2nd number:\n");
	scanf("%f%f",&num1,&num2);
	
	fsum = num1 + num2; // Normal Addition Float + Float 
	isum = floor(fsum); // Dropping any decimal points == (int)fsum
	//isum = fsum; //Typecasting float >> int
	
	printf("The integer floor of the sum %f = %d",fsum,isum);

	return 0;
}