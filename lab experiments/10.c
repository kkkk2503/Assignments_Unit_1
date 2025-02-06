#include <stdio.h>
#include <string.h>
void insert_string() {
    char mainStr[100], insertStr[50], resultStr[150];
    int position, i;
    printf("Enter the main string: ");
    gets(mainStr);   
    printf("Enter the string to be inserted: ");
    gets(insertStr);  
printf("Enter the position where the string should be inserted: ");
    scanf("%d", &position);
    resultStr[0] = '\0';
    for (i = 0; i < position; i++) {
        resultStr[i] = mainStr[i];
    }
    resultStr[i] = '\0';
    strcat(resultStr, insertStr);
    strcat(resultStr, mainStr + position);
    printf("The new string is: %s\n", resultStr);
}
void delete_char() {
    char mainStr[100], subStr[50], resultStr[100];
    char *pos;
    int index, len;
    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter the substring to be deleted: ");
    gets(subStr);
    pos = strstr(mainStr, subStr);
        index = pos - mainStr;
        len = strlen(subStr);
        strncpy(resultStr, mainStr, index);
        resultStr[index] = '\0';
        strcat(resultStr, mainStr + index + len);
        printf("The new string is: %s\n", resultStr);
}
int main() {
    int choice;
printf("Enter number 1 to insert string or 2 to delete string: ");
    scanf("%d", &choice);
    getchar(); 
    if (choice == 1) {
        insert_string();
    } else if (choice == 2) {
        delete_char();
    } 
    return 0;
}