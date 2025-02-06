#include <stdio.h>

int main() {
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

    return 0;
}