#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* File I/O */
    int x = 12;
    float y = 11.00;
    char z = 'r';

    /* 1. Create Pointer */
    FILE *fptr = NULL;

    /* 2. Open file for writing */
    fptr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/txt1.txt", "w");

    if (fptr == NULL) { 
        printf("Error occurred while writing to a text file!"); 
        exit(1); 
    } 

    /* 3. Input/Output Functions:
          Formatted Input:
              fscanf(filePointer, Data)

          Formatted Output:
              fprintf(filePointer, Data)

          String Input:
              fgets(stringData, maxLength, filePointer)

          String Output:
              fputs(stringData, filePointer)
    */

    // 3a. Formatted Input
   // fscanf(fptr,"This is my x = %d and my y= %f and may z = \t%c", &x, &y, &z);

    // 3b. Formatted Output (Example: writing values to the file)
    fprintf(fptr, "This is my x = %d and my y= %f and may z = %c", x, y, z);
    
    fclose(fptr);

    fptr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/txt1.txt", "a");
    fprintf(fptr, "\nThis is my x = %d and my y= %f and may z = %c", x, y, z);


    // 3c. String Input (Example: Reading a line from the file)
   // char stringData[100];
   // gets(stringData);

  	fgets(stringData, 20, fptr);

    // 3d. String Output (Example: Writing a string to the file)
	fputs("\nHello, World!", fptr);

    /* 4. Close File */
    fclose(fptr); 

    return 0;
}
