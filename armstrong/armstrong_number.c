#include<stdio.h>

int main()
{
    int number,n,result=0,r;
    printf("enter your number ");
    scanf("%d",&number);
    n=number;
    while(number>0)
    {
        r=number%10;
        number=number/10;
        result+=r*r*r;
    }
    printf("%d",result);
    if(n==result)
    {
        printf("\nnumber %d is a armstrong",n);
    }
    else
    {
        printf("not");
    }
    return 0;
}