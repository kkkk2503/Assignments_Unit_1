#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],strp[100];
    scanf("%s",&str);
    strlwr(str);
    strcpy(strp,str);
    strrev(strp);
    int result=strcmp(str,strp);
    if(result==0)
    {
        printf("The string is palindrome: %s",strp);
    }
    else
    {
        printf("The string is not palindrome %s",strp);
    }
    return 0;
}