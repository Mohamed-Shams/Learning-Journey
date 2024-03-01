#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char n[1000];
    int l,i,c=0,d=0,e=0,f=0,g=0,h=0,o=0,j=0,k=0,m=0;
    scanf("%s",&n[i]);
    l=strlen(n);
    for(i=0;i<=l;i++){
    
    if(n[i]=='0'){
        c=c+1;
    }
    if(n[i]=='1'){
        d=d+1;
    }
    if(n[i]=='2'){
        e=e+1;
    }
    if(n[i]=='3'){
        f=f+1;
    }
    if(n[i]=='4'){
        g=g+1;
    }
    if(n[i]=='5'){
        h=h+1;
    }
    if(n[i]=='6'){
        o=o+1;
    }
    if(n[i]=='7'){
        j=j+1;
    }
    if(n[i]=='8'){
        k=k+1;
    }
    if(n[i]=='9'){
        m=m+1;
    }
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d",c,d,e,f,g,h,o,j,k,m);
    
     
    return 0;
}
