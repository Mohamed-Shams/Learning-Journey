#include<stdio.h>
#include<stdlib.h>

void sumAndAvgAndMaxAndMin(int *arr, int n, int *summ,float *Avg, int *Max, int *Min);
void Calc(int num1,int num2,int *add,int *sub,int *mul);
void stringCopy(char *place,char *source);
int main()
{
	/* Pointer */

	/* Pointers&Function To get sum,avg,max,min */
/*	
	int arr[10] = {5,6,9,7,1,0,10,-1,15,3};
	int sum = 0, Max = 0, Min = 0;
	float Avg = 0;
	sumAndAvgAndMaxAndMin(arr,10,&sum,&Avg,&Max,&Min);
	printf("Sum = %d\n",sum);
	printf("Avg = %.2f\n",Avg);
	printf("Max = %d\n",Max);
	printf("Min = %d\n",Min);
*/

/*====================================================================*/
	
	/* Pointers&Function To add,sub,mul */
/*	
	int add = 0, sub = 0, mul = 0;
	int num1 = 5,num2 = 2;
	Calc(num1,num2,&add,&sub,&mul);
	printf("Add = %d\n",add);
	printf("Sub = %d\n",sub);
   	printf("Mul = %d\n",mul);
*/

/*====================================================================*/

	/* Student Name */
/*
	char arr[20];
    char *p = arr;
    for (int i = 0; i < 20; i++)
    {
        scanf("%c",p+i);
        if(*(p+i) == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        scanf("%c",*(p+i));
        if(*(p+i) == '\n')
        {
            break;
        }
    }
*/

/*====================================================================*/

    /* Student Name Using Malloc */
/*
    char *p = (char *)malloc(20);
    for (int i = 0; i < 20; i++)
    {
        scanf("%c",p+i);
        if(*(p+i) == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%c",*(p+i));
        if(*(p+i) == '\n')
        {
            break;
        }
    }
    free(p);
*/

/*====================================================================*/

	/* String Copy Function */
/*
	char s[10];
	char arr[10] = "Moham sh";
	stringCopy(s,arr);
	printf("%s",s);
*/
/*====================================================================*/
	return 0;
}
void sumAndAvgAndMaxAndMin(int *arr, int n, int *summ,float *Avg, int *Max, int *Min)
{
	*Max = *arr;
	*Min = *arr;

	for (int i = 0; i<n; i++)
	{
		*summ = *summ + *(arr+i);
		if(*(arr+i) < *Min)
		{
			*Min = *(arr+i);
		}
		if(*(arr+i) > *Max)
		{
			*Max = *(arr+i);
		}
	}
	*Avg = (float)(*summ)/n;
}
void Calc(int num1,int num2,int *add,int *sub,int *mul)
{
	*add = num1 + num2;
	*sub = num1 - num2;
	*mul = num1 * num2;
}
void stringCopy(char *place,char *source)
{
	int i = 0;
	while(*(source+i) != '\n')
	{
		*(place+i) = *(source+i);
		i++;
	}
	*(place+(i+1)) = '\0';
}