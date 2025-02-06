#include<stdio.h>
#include<string.h>

int main()
{
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

    return 0;
}