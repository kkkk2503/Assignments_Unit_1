#include<stdio.h>

int main()
{
//program for logical operator
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is max");
}
else
{
printf("a is not max");
}
return 0;
}