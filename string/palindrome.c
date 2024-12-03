#include<stdio.h>
#include<string.h>
int main()
{
    int i,a,b;
    char str[5],strp[5];
    a=strlen(str);
    b=a-1;
    printf("enter string ");
    scanf("%s",&str);
    for ( i = a; i >= 0; i--)
    {
    printf("%c",str[i]);
    } 
}