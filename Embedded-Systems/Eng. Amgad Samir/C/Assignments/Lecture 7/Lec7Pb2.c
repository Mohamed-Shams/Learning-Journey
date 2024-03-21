#include<stdio.h>

int main()
{
    int i,j,size=100,num;
    int arr[size];
	
    for(i=1,j=0;i<size*2 && j<size;i+=2,j++)
    {
        arr[j]=i;
    }
	
    printf("Enter The required Term From 1 To 100: ");
    scanf("%d",&num);
    
	if(num<=100)
    {
        printf("\nThe%dth trem in the series:1,3,5,27,... is: %d",num,arr[num-1]);
    }
    else
    {
        printf("Invalid Term");
    }
	
	return 0;
}