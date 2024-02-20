
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,num;
    printf("Enter the num: ");
    scanf("%d",&num);
    
   for(i=1;i<=num;i++){
       
	   for(k=1;k<=num-i;k++){
           printf(" ");
       }
	   
       for(j=1;j<=2*i-1;j++){
            printf("*");
       }
       

       printf("\n");
   }

    return 0;   
}