#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,size,sum=0;
    scanf("%d",&size);
    int Arr[size];
    for(i=0;i<size;i++)
    {
        int x;
        scanf("%d",&x);
        Arr[i]=x;
        sum=sum+Arr[i];
    }
    printf("%d",sum);
    return 0;
}
