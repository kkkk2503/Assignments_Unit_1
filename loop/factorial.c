#include<stdio.h>

int main()
{
    int i,n,a;
    n=1;
    printf("enter number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        n*=i;
    }
    printf("%d",n);
    return 0;
}