#include<stdio.h>
int main(){
	
	char ch;
	printf("Enter The Character:");
	scanf("%c",&ch);
	if (((ch >= 'a') && (ch <= 'z')) || ((ch>='A') && ((ch<='Z')))){
			printf("The Character %c is an alphabet",ch);
	}
	else printf("The Character %c isn't an alphabet",ch);
	
	return 0;

}