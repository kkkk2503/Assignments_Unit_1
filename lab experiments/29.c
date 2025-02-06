#include<stdio.h>

void write_file()
{
    char fileName[100];
    char line[256];
    FILE *file;

    printf("Enter the file name: ");
    gets(fileName);
    
    file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text (enter a blank line to stop):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == '\n') {
            break; 
        }
        fputs(line, file);
    }
    
    fclose(file);
    printf("Text written to %s\n", fileName);
}
void read_file()
{
    char fileName[100];
    char line[256];
    FILE *file;

    printf("Enter the file name: ");
    gets(fileName);

    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file %s:\n", fileName);

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}
void append_file()
{
   char fileName[100];
    char line[256];
    FILE *file;

    printf("Enter the file name: ");
    gets(fileName);

    file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

printf("Enter text to append (enter a blank line to stop):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == '\n') {
            break; 
        }
        fputs(line, file);
    }

    fclose(file);
    printf("Text appended to %s\n", fileName); 
}
int main()
{
    write_file();
    read_file();
    append_file();
    read_file();
}