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
    printf("%d is greater than %d and %d",a,b,c);
}
else if(b>a&&b>c)
{
    printf("%d is greater than %d and %d",b,a,c);
}
else if(c>a&&c>b)
{
    printf("%d is greater than %d and %d",c,a,b);
}
else if (a==b&&b==c)
{
    printf("all numbers are equal");
}
}