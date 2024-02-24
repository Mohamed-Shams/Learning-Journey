#include<stdio.h>

int main()
{
    int i,size,num,x;
	
    printf("Enter The Size of Array: ");
    scanf("%d",&size);
    int arr[size];
	
    for(i=0;i<size;i++)
    {
        printf("Enter The [%d] element of Array: ",i+1);
        scanf("%d",&arr[i]);
    }
	
    printf("Enter The required Number: ");
    scanf("%d",&num);
	
	int found = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            printf("The FIRST occurrence of [%d] at index [%d]", num, i);
            found = 1;
            break;
        }
    }
	
    if (found==0)
    {
        printf("%d",-1);
    }
	
    return 0;
}