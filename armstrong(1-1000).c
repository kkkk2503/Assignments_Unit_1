#include<stdio.h>

int main()
{
    int number,n,result,r;
    for(number=0;number<=1000;number++)
    {
    n=number;
    result=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        result+=r*r*r;
    }
   
    if(result==number)
    {
        printf("\nnumber %d is a armstrong",number);
    }
    }
    return 0;
}