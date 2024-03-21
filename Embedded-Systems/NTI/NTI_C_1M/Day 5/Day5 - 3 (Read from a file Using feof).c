#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* Read from a file Using feof & " "*/
    
  char str[100];

  FILE * filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/txt1.txt", "r");

/*
  while(!feof(filePtr))
  {
    fgets(str,200,filePtr); //200 is a value, it's for the maximum length of line 
    printf("%s",str);
  }

*/

  fclose(filePtr);


  return 0;
}
