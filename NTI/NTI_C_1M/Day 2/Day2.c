#include<stdio.h>

int main()
{
	/* Students Score Example of linear search */ 
	int score,Stdarr[5],arr[5] = {100,50,75,85,50};
	int j = 0;

	printf("Enter The Score you want to search: ");
	scanf("%d",&score);

	for(int i = 0; i<5; i++)
	{
		if(arr[i] == score)
		{
			Stdarr[j] = i+1;
			j++;
		}
	}

	if(j == 0)
	{
		printf("Score isn't found");
	}
	else
	{
		for(int i=0; i<j; i++)
		{
			printf("Score %d is found for student No. %d\n",score,Stdarr[i]);
		}
	}

	return 0;
}