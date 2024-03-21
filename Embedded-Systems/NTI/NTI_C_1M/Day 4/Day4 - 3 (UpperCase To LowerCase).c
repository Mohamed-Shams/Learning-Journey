#include<stdio.h>
#include<stdlib.h>

void upperToLower(char str[]);
int main()
{
	/* UpperCase To LowerCase */
	char str1[20];

	printf("Enter The first string: ");
    gets(str1);
    upperToLower(str1);

	return 0;
}

void upperToLower(char str[])
{
	int i = 0;
	int flag = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i]<='z')
		{
			flag = 1; //has Lowercase
			break;
		}
		i++;
	}
	if(flag == 1)
	{
		printf("The String has a Lowercase character\n");
	}
	else
	{
		printf("The String is in Uppercase Format of characters\nThe Lowercase Format is: ");
		i = 0;
		while(str[i] != '\0')
		{
			str[i] = str[i] + 32;
			i++;
		}	
		printf("%s",str);
	}
}

