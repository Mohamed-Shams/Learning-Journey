#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, a;
    scanf("%d", &num);
    int arr[num],temp[num];
    for(i = 0; i < num; i++) {
        scanf("%d",&a);
        arr[i]=a;
    }
    for(i = 0; i < num; i++){
        temp[i]=arr[num-1-i];

    } 

    for(i = 0; i < num; i++){
        arr[i]=temp[i];
        printf("%d ", arr[i]);
    } 
      
    return 0;
}
