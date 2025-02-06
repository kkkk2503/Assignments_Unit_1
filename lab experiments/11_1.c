#include <stdio.h>

int main() {
    char fileName[100];
    char line[256];
    FILE *file;

    printf("Enter the file name: ");
    fgets(fileName, sizeof(fileName), stdin);

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

    return 0;
}