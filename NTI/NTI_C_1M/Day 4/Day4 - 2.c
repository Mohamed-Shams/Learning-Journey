#include<stdio.h>
#include<stdlib.h>

void concatinate(char str1[], char str2[], char *result);
int main()
{
	/* Concatinate 2 Strings with space between the 2 Strings */
	char str1[20];
	char str2[20];
	char result[40];
	printf("Enter The first string: ");
    gets(str1);
	printf("Enter The second string: ");
	gets(str2);

	printf("\nThe first string: %s\n",str1);
	printf("The second string: %s\n",str2);
	concatinate(str1,str2,result);
	printf("\nThe concatinated string: %s",result);

	return 0;
}

void concatinate(char str1[], char str2[], char *result)
{
	int i = 0;
	int j = 0;
	while(str1[i] != '\0')
	{
		*(result+i) = str1[i];
		i++;
	}
	*(result+i) = ' ';
	i++;
	while(str2[j] != '\0')
	{
		*(result+i) = str2[j];
		i++;
		j++;
	}
}