#include <stdio.h>

void PrimeNumbers(int ,int );

int main() {
    int num1,num2;
    printf("Enter your 1st number: ");
    scanf("%d", &num1);
	printf("Enter your 2nd number: ");
    scanf("%d", &num2);
	
	printf("\n******************************");
	printf("\nPrime numbers between %d and %d are:\n",num1,num2);
	PrimeNumbers(num1,num2);
	printf("\n******************************\n");
    return 0;
}

void PrimeNumbers(int num1,int num2) {
	
	int prime;
	int i,j;
	int swap,ii;
	
 if(num1 > num2)  		// if the user entered value in num1 larger than num2
    {  
        swap = num1;  
        num1= num2;  
        num2  = swap;  
    }  
  
	while (num1 <= 1)    // if the user entered the negative input in num1
	{
		num1+=1;
		continue;
	}
	while (num2 <= 1)    // if the user entered a negative input or 1 in num2
	{
		num2+=1;
		continue;
	}
	
    for(i = num1; i <= num2; i++)  
    {  
        
		prime = 1;
				
        ii  = i/2;  
        for(j = 2; j <= ii; j++)  
        {  
            if(i % j == 0)  
            {  
                prime = 0;  
                break;  
            }  
        }  
		
        if(prime)
		{
			printf("%d\t", i); 
			
		}
    }  
}
