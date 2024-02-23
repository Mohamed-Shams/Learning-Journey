#include<stdio.h>
#include<stdlib.h>

#define printcv() do{printf("My Name is Mohamed\n");\
                  printf("CVCV\n");\
                  printf("HELLLP");}while(0);

#define REPEAT(r, a) {\
                  int i = 0;\
                  while(i<r){\
                    printf(a);\
                    i++;\
                  }\
                };

#define Concatinate(a,b)   #a "" #b  //Concatinate strings

int main()
{
    /* Preprocessor */
    //printcv();
    //printf(Concatinate(Hello,213));
    //REPEAT(3,"Mo")
    


    return 0;
}



/* Check
  char *ptr = "HELLO";
  printf("%s ",++ptr);
        "ELLO"
*/