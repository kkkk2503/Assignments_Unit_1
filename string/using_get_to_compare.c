#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    gets(str1);
    gets(str2);
    int result = strcmp(str1, str2);
     if (result < 0) 
     {
        printf("\"%s\" is not same as \"%s\"\n",str1, str2);
    } 
    else 
    {
        printf("\"%s\" is equal to \"%s\"\n",str1, str2);
    }
    return 0;
    return 0;
}