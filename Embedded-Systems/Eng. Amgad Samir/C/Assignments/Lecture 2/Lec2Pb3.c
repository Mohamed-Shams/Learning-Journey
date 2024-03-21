#include<stdio.h>
int main(){
	
	int oldNum,x, Bit, newNum;
	printf("Enter the required number:");
	scanf("%d",&oldNum);
	printf("Enter the bit number:");
	scanf("%d",&Bit);	
	x = oldNum & (1<<Bit);
    newNum =  (x>>Bit);
    printf("The bit number %d of the number %d has the value of: %d",Bit,oldNum,newNum);

}