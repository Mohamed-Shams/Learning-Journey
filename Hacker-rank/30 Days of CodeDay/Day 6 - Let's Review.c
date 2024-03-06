#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t > 0) {
        char s[10000]; 
        scanf("%s", s);

        int length = strlen(s);

        for (int i = 0; i < length; i += 2) 
        {
            printf("%c", s[i]);
        }

        printf(" ");

        for (int i = 1; i < length; i += 2) 
        {
            printf("%c", s[i]);
        }

        printf("\n");

        t--;
    }

    return 0;
}
