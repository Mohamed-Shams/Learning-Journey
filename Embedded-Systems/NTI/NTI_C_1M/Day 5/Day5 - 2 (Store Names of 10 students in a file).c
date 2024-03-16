#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* Store Names of 10 students in a file */
    
  char str[100];

  FILE * filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/txt1.txt", "w");

  for(int i = 0; i < 10; i++)
  {
    printf("Enter Name of Student NO.%d: ",i+1);
    //fgets(str,20, stdin); //only takes 20 char (Max. Length), stdin to take it from user
    gets(str);              //No Max. Length, with the limits of array
    fputs(str,filePtr);
    fputs("\n",filePtr);
  }

  fclose(filePtr);
  return 0;
}
