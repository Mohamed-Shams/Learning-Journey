#include<stdio.h>

int main()
{
	/*Arrays*/
	
	/* Students Score Example of linear search */ 
/*	int score,Stdarr[5],arr[5] = {100,50,75,85,50};
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
*/

/*====================================================================*/

	/* Count Numbers for dublicated elements */
/*	int k = 0, i = 0, j = 0, flag, arr[6] = {4,2,2,1,4,2};
	int sum = 0, Donearr[6];
	for(i = 0; i<6; i++)
	{
		flag = 0;
		for(j = i+1; j<6; j++)
		{
			if((arr[i] == arr[j]))
			{
				for(k = 0; k<6; k++)
				{
					if((arr[i] != Donearr[k]))
					{
						Donearr[k] = arr[i];
						flag = 1;
					}
				}	
			}
		}
		if(flag == 1)
		{
			sum ++;
		}
	}
	printf("Number repeated %d ", sum);
*/

/*====================================================================*/

	/* Merge 2 Arrays and Sort */
/*	int k = 0, i = 0, flag, arr1[3] = {4,2,2}, arr2[3] = {1,4,1};
	int arr3[6] = {0};

	for(i = 0; i<3; i++)
	{
		arr3[i] = arr1[i];
		arr3[i+3] = arr2[i];
	}
	printf("Array Before Sorting: \n");
	for(i = 0; i<6; i++)
	{
		printf("%d\n",arr3[i]);
	}

	for(i = 0; i<5; i++)
	{
		for(k = i+1; k<6; k++)
		{
			if(arr3[i] > arr3[k])
			{
				flag = arr3[k];
				arr3[k] = arr3[i];
				arr3[i] = flag;
			}
		}
		
	}
	printf("Array After Sorting: \n");
	for(i = 0; i<6; i++)
	{
		printf("%d\n",arr3[i]);
	}
*/

/*====================================================================*/

	return 0;
}