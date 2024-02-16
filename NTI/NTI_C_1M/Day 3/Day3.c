#include<stdio.h>

void sumAndAvgAndMaxAndMin(int *arr, int n, int *summ,float *Avg, int *Max, int *Min);
void Calc(int num1,int num2,int *add,int *sub,int *mul);

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

	/* D */

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