#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temperature:");
	scanf("%d",&temp);
	
	if ((temp>=0)&&(temp<=100)){
		
		if(temp<=30){
		printf("The required heating time of %dC = 7 mins.",temp);
	}
		else if(temp<=60){
		printf("The required heating time of %dC = 5 mins.",temp);
	}
		else if(temp<=90){
		printf("The required heating time of %dC = 3 mins.",temp);
	}
		else if(temp<=100){
		printf("The required heating time of %dC = 1 mins.",temp);
	}
	}
	else printf("%d is invalid",temp);
	
	return 0;
}