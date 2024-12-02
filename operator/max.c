#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&b>c)
{
    printf("a is max");
}
if(b>a&&b>c)
{
    printf("b is max");
}
if(c>a&&c>b)
{
    printf("c is max");
}
}