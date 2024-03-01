#include<stdio.h>
int main(){
	
	char ch,r;
	printf("Enter the lowercase letter:");
	scanf("%c",&ch);
	if (((ch >= 'a') && (ch <= 'z')) || ((ch>='A') && ((ch<='Z')))){
	r = ch - 32;
	printf("The UPPERCASE of the letter %c is: %c",ch,r);
	}
	else printf("%c isn't a letter",ch);

	return 0;
}