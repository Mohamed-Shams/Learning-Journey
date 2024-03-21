#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int ColumnNO(void);

int main()
{
    char st_id;
    char st_name[100];
    float st_score;
   // int Column_NO = ColumnNO();
    char choice[20];
    printf("Enter your choice (CREATE - SELECT - INSERT - DELETE): ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = '\0'; // Remove the newline character when present

    char c1_name[20];
    char c2_name[20];
    char c3_name[20];

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

        printf("Database Created");
        FILE *filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "w");

        if (filePtr == NULL) 
        {
            fprintf(stderr, "Error opening file for writing.\n");
            return 1;
        }

        fprintf(filePtr, "%s,%s,%s\n", c1_name, c2_name, c3_name);
        fclose(filePtr);
    } 
    else if (strcmp(choice, "INSERT") == 0) 
    {
        FILE *filePtrRead = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "r");
        if (filePtrRead != NULL) 
        {
            if (fscanf(filePtrRead, "%19[^,],%19[^,],%19[^\n]\n", c1_name, c2_name, c3_name) != 3) 
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

        FILE *filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "a");

        if (filePtr == NULL) 
        {
            fprintf(stderr, "Error opening file for appending.\n");
            return 1;
        }

        again:
        printf("Enter %s: ", c1_name);
        scanf(" %c", &st_id);
        getchar();

        FILE *filePtr1 = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "r");

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
                if (nextChar == st_id) 
                {
                    printf("Error Element is primary key\n");
                    goto again;
                }
            }
        }

        fclose(filePtr1);

        printf("Enter %s: ", c2_name);
        fgets(st_name, sizeof(st_name), stdin);
        st_name[strcspn(st_name, "\n")] = '\0'; // Remove the newline character when present
        printf("Enter %s: ", c3_name);
        scanf("%f", &st_score);
        fprintf(filePtr, "%c,%s,%f\n", st_id, st_name, st_score);
        fclose(filePtr);
        printf("\nData is inserted successfully");
    } 
    else if (strcmp(choice, "SELECT") == 0) 
    {
        FILE *filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "r");

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
        FILE *filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "w");

        if (filePtr == NULL) 
        {
            fprintf(stderr, "Error opening file for deleting.\n");
            return 1;
        }

        printf("Database Deleted");
        fclose(filePtr);
    }

    return 0;
}

/*
int ColumnNO(void)
{
    FILE *filePtr = fopen("D:/Courses/Embedded Systems/Embedded_Systems/DB.csv", "r");
    char c = fgetc(filePtr);
    int i = 0;
    while (c != EOF) 
    {
        c = fgetc(filePtr);
        if(c == '\n') 
        {
            break;
        }
        if(c == ',') 
        {
            i++;
        }
    }
    return i+1;
}
*/
