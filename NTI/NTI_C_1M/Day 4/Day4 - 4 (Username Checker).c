#include<stdio.h>
#include<stdlib.h>
 
void usernameChecker(char str[]);
int main()
{
	/* Username Checker */
	char str1[20];

	printf("Enter Username: ");
    gets(str1);

    usernameChecker(str1);

	return 0;
}

void usernameChecker(char str[])
{
	int i = 0;
	int flag = 0;
	int temp = 0;
	int count = 0;

	if(!(((str[0]>='a' && str[0]<='z')) || (str[0]>='A' && str[0]<='Z')))
	{
		flag = 1;				//To be sure it starts with a character
	}

	while(str[i] != '\0')
	{
		count++;
		if(str[i] == '_')
		{
			temp++;				 //To be sure only one '_' is used >> less than 2
		}
		if(str[i] == ' ')
		{	
			temp = 2;			//To be sure no spaces
			break;
		}
		i++;
	}
	if((count < 8) || (flag == 1) || (temp > 1))
	{
		printf("Username isn't valid");
	}
	else
	{
		printf("Username is valid");
	}
}

