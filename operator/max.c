#include <stdio.h>
int main()
{
int a,b,c;
printf("enter your first number");
scanf("%d",&a);
printf("enter your second number");
scanf("%d",&b);
printf("enter your third number");
scanf("%d",&c);
if(a>b&&b>c)
{
    printf("a is max with a value of %d",a);
}
if(b>a&&b>c)
{
    printf("b is max with a value of %d",b);
}
if(c>a&&c>b)
{
    printf("c is max with a value of %d",c);
}
}