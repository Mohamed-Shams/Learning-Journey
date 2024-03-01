#include<stdio.h>
int main(){
	
	int Num,x,y,z;
	printf("Enter the required number:");
	scanf("%d",&Num);

	x = (Num/100) % 10;
	y = (Num/10)%10;
	z = Num%10;
	
    printf("\t %d \t %d \t %d",x,y,z); 

}