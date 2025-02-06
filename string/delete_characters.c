#include<stdio.h>
#include<string.h>

int main()
{
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