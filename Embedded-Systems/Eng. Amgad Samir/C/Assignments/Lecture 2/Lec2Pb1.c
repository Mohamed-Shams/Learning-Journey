#include<stdio.h>
int main(){
	
	int oldNum,Bit, newNum;
	printf("Enter the required number:");
	scanf("%d",&oldNum);
	printf("Enter the bit number:");
	scanf("%d",&Bit);	
	newNum = oldNum & ~(1<<Bit);
    printf("The new modification for %d as the bit number %d is cleared is: %d",oldNum,Bit,newNum);

}