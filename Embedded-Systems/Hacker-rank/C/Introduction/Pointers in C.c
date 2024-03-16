#include <stdio.h>

void update(int a,int b,int *sum,int *sub) {
    *sum=a+b;
    *sub=a-b;
    if(*sub<0)
    {
        *sub*=-1;
    }    
}

int main() {
    int a, b;
    int sum=0,sub=0;
    scanf("%d %d", &a, &b);
    update(a, b,&sum,&sub);
    printf("%d\n%d", sum, sub);

    return 0;
}
