#include<stdio.h>

int main()
{
    int i,j,mul=1,size=100,num;
    int arr[size];
	
    for(i=1,j=0;i<size*2 && j<size;i+=2,j++)
    {
        arr[j]=mul;
        mul = mul*3;
    }
	
    printf("Enter The required Term From 1 To 10: ");
    scanf("%d",&num);
	
    if(num<=10)
    {
        printf("\nThe%dth trem in the series:1,3,9,27,... is: %d",num,arr[num-1]);
    }
    else
    {
        printf("Invalid Term");
    }
	
    return 0;
}