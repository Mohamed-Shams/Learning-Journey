#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    gets(str);
    int i = 0;
    while(str[i] != '\0')
    {
       if(str[i] == ' ') 
       {
        str[i] = '\n';
       }
       i++;
    }
    puts(str);
    return 0;
}
