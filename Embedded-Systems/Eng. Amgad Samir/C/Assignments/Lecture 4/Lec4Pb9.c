#include <stdio.h>

int main() {
    int i,j,num;
    printf("Enter the num of rows: ");
    scanf("%d",&num);
    
  for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if((j==i) || (j == num-i+1))
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

       printf("\n");
   }

    return 0;   
}