#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    int ii;
    double dd;
    char ss[1000];
    char sss[1000];
    strcpy(sss,s);
    
    scanf("%d",&ii);
    scanf("%lf",&dd);
    getchar(); 
    fgets(ss, sizeof(ss), stdin);
    
    printf("%d\n",ii+i);
    printf("%.1lf\n",d+dd);
    
    strcat(sss, ss);
    puts(sss);

    return 0;
}