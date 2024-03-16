#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* create excel file */
  int st_id;
  char st_name[100];
  float st_score;

  FILE * filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/txt1.csv", "w");
  fputs("Id\tName\tScore\n", filePtr);
  //fputs("Id,Name,Score\n", filePtr);

for (int i = 0; i < 3; i++) 
{
  printf("Enter ID: ");
  scanf("%d", &st_id);
  getchar();
  printf("Enter Name: ");
  fgets(st_name, sizeof(st_name), stdin);
  st_name[strcspn(st_name, "\n")] = '\0'; // Remove the newline character when present
  printf("Enter Score: ");
  scanf("%f", &st_score);

  fprintf(filePtr, "%d\t%s\t%f\n", st_id, st_name, st_score);
  //fprintf(filePtr, "%d,%s,%f\n", st_id, st_name, st_score);
}
  

  fclose(filePtr);


  return 0;
}
