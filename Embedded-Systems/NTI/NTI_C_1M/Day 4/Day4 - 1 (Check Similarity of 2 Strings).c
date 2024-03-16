#include<stdio.h>
#include<stdlib.h>

int StringLength(char arr[]);
void ifSimilar(char *arr1,char *arr2);
int main()
{
	/* 2 Strings Similar or not? */
	char arr1[20];
	char arr2[20];
	
	printf("Enter The first name: ");
    gets(arr1);
	printf("Enter The second name: ");
	gets(arr2);

    ifSimilar(arr1,arr2);
	return 0;
}

int StringLength(char arr[])
{
	int count = 0, i = 0;
	while(arr[i] != '\0')
	{
	    count++;
	    i++;
	}
	return count;
}

void ifSimilar(char *arr1,char *arr2)
{
	int flag = 0;
	int i = 0;
	int count1 = StringLength(arr1);
	int count2 = StringLength(arr2);
	if(count1 != count2)
		{
			printf("Not Similar");
		}	
	else
	{
	while(1)
	{
			for(i = 0; i < count1; i++)
			{
				if(arr1[i]>='A' && arr1[i]<='Z')
				{
				    arr1[i] = arr1[i] + 32;
				}
				if(arr2[i]>='A' && arr2[i]<='Z')
				{
				    arr2[i] = arr2[i] + 32;
				}
				if(arr1[i] != arr2[i])
				{
					flag = 1;
					break;
				}
			}
			if((flag == 1))
			{
				printf("Not Similar");
				break;
			}
			else
			{
				printf("Similar");
				break;
			}
		}
	}
}