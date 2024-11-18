#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Apple";
    char str2[] = "Hello";
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
}