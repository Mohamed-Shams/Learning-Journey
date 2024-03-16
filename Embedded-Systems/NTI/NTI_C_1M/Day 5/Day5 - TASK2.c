#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FILENAME "D:/Courses/Embedded Systems/Embedded_Systems/dep.csv"

int main()
{
    char dept_id;
    char first_name[100];
    char last_name[100];
    float salary;
    
    char choice[20];

    printf("Enter your choice (CREATE - SELECT - INSERT - DELETE): ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = '\0'; // Remove the newline character when present

    char c1_name[20];
    char c2_name[20];
    char c3_name[20];
    char c4_name[20];

    if (strcmp(choice, "CREATE") == 0) 
    {
        printf("Enter Column 1 Name: ");
        fgets(c1_name, sizeof(c1_name), stdin);
        c1_name[strcspn(c1_name, "\n")] = '\0';
        printf("Enter Column 2 Name: ");
        fgets(c2_name, sizeof(c2_name), stdin);
        c2_name[strcspn(c2_name, "\n")] = '\0';
        printf("Enter Column 3 Name: ");
        fgets(c3_name, sizeof(c3_name), stdin);
        c3_name[strcspn(c3_name, "\n")] = '\0';
        printf("Enter Column 4 Name: ");
        fgets(c4_name, sizeof(c4_name), stdin);
        c4_name[strcspn(c4_name, "\n")] = '\0';

        printf("Database Created");
        FILE *filePtr = fopen(FILENAME, "w");
        fprintf(filePtr, "%s,%s,%s,%s\n", c1_name, c2_name, c3_name, c4_name);
        fclose(filePtr);
    } 
    else if (strcmp(choice, "INSERT") == 0) 
    {
        FILE *filePtrRead = fopen(FILENAME, "r");
        if (filePtrRead != NULL) 
        {
            if (fscanf(filePtrRead, "%19[^,],%19[^,],%19[^,],%19[^\n]\n", c1_name, c2_name, c3_name, c4_name) != 4) 
            {
                fprintf(stderr, "Error reading column names from the file.\n");
                fclose(filePtrRead);
                return 1;
            }
            fclose(filePtrRead);
        } 
        else 
        {
            fprintf(stderr, "Error opening file for reading.\n");
            return 1;
        }

        FILE *filePtr = fopen(FILENAME, "a");

        if (filePtr == NULL) 
        {
            fprintf(stderr, "Error opening file for appending.\n");
            return 1;
        }

        again:
        printf("Enter %s: ", c1_name);
        scanf(" %c", &dept_id);
        getchar();

        FILE *filePtr1 = fopen(FILENAME, "r");

        if (filePtr1 == NULL) 
        {
            fprintf(stderr, "Error opening file for reading.\n");
            return 1;
        }

        char c;
        while ((c = fgetc(filePtr1)) != EOF) 
        {
            if (c == ',') 
            {
                continue;
            } 
            else if (c == '\n') 
            {
                char nextChar = fgetc(filePtr1);
                if (nextChar == dept_id) 
                {
                    printf("Error %s is primary key\n",c1_name);
                    goto again;
                }
            }
        }

        fclose(filePtr1);

        printf("Enter %s: ", c2_name);
        fgets(first_name, sizeof(first_name), stdin);
        first_name[strcspn(first_name, "\n")] = '\0'; // Remove the newline character when present
        printf("Enter %s: ", c3_name);
        fgets(last_name, sizeof(last_name), stdin);
        last_name[strcspn(last_name, "\n")] = '\0'; // Remove the newline character when present
        printf("Enter %s: ", c4_name);
        scanf("%f", &salary);

        fprintf(filePtr, "%c,%s,%s,%0.2f\n", dept_id, first_name,last_name, salary);
        fclose(filePtr);
        printf("\nData is inserted successfully");
    } 
    else if (strcmp(choice, "SELECT") == 0) 
    {
        FILE *filePtr = fopen(FILENAME, "r");

        if (filePtr == NULL) 
        {
            fprintf(stderr, "Error opening file for reading.\n");
            return 1;
        }

        char c = fgetc(filePtr);
        while (c != EOF) 
        {
            printf("%c", c);
            c = fgetc(filePtr);
        }

        fclose(filePtr);
    } 
    else if (strcmp(choice, "DELETE") == 0) 
    {
        FILE *filePtr = fopen(FILENAME, "w");
        printf("Database Deleted");
        fclose(filePtr);
    }

    return 0;
}
