#include <stdio.h>

int countHoles(int num);

int main(){
	int num;
	printf("Enter your number: ");
	scanf("%d",&num);
	int n = countHoles(num);
	
	printf("Number of holes is: %d",n);
	}
	
int countHoles(int num){
int	n = 0;
int res;
	for(;num>0;){
		res=num%10;
		switch(res){
			case 0: n++; 
			break;
			case 4: n++; 
			break;
			case 6: n++; 
			break;
			case 8: n+=2; 
			break;
			case 9: n++; 
			break;
		}
		num/=10;
	}
	return n;
}