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

   //Concatinate strings

#if (5>6)
#warning This is a warning
#endif

int main()
{
    /* Preprocessor */
    //printcv();
    //printf(Concatinate(Hello,213));
    //REPEAT(3,"Mo")

  unsigned int age, newage;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  newage = age * 365*24*60*60*1000;
  if(newage>2147483647)
  {
    printf("ERROR AGE in above INT MAX");
    return 32341;
  }
    return 0;
}



/* Check
  char *ptr = "HELLO";
  printf("%s ",++ptr);
        "ELLO"
*/