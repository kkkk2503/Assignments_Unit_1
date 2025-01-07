#include<stdio.h>

int main()
{
    int a;
    printf("enter your percentage ");
    scanf("%d",&a);
    if(a>=70&&a<=100)
    {
        printf("distinction");
    }
    else if (a>=60&&a<70)
    {
        printf("first class");
    }
    else if (a>=40&&a<60)
    {
        printf("second class");
    }
    else
    {
        printf("failed");
    }
}