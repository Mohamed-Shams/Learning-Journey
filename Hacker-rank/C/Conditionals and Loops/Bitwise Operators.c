#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and,or,xor,flag1=0,flag2=0,flag3=0,max1,max2,max3;
    
    
    for(int a=1;a<n;a++)
    {
        for(int b=a+1; b<=n;b++)
        {
            and = a&b;
            if (and<k && and>flag1)
            {
                flag1 = and;
            }
            or = a|b;
            if (or<k && or>flag2)
            {
                flag2 = or;
            }
            xor = a^b;
            if (xor<k && xor>flag3)
            {
                flag3 = xor;
            }
        }
    }
    printf("%d\n%d\n%d",flag1,flag2,flag3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
