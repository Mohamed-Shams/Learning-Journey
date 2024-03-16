#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int x,y,a,q;
    float z,c,s,w;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&z,&c);
    if (x>=1 && x<=10000 && y>=1 && y<=10000 && z>=1.0 && z<=10000.0 && c>=1.0 && c<=10000.0){
        a = x + y;
        q = x-y;
        s = z+c;
        w=z-c;
        printf("%d %d \n",a,q);
        printf("%0.1f %0.1f",s,w);

    }
    
    return 0;
}
