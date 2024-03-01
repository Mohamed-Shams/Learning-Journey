#include<stdio.h>
int main(){
	
	int num1,num2;
	printf("Enter the 1st and the 2nd number:\n");
	scanf("%d%d",&num1,&num2);
	if ((num1%num2)==0){
	printf("%d is multiple of %d",num1,num2);
	}
	else printf("%d isn't multiple of %d",num1,num2);

	return 0;
}