#include<stdio.h>

int main()
{
    int n,i,z;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            z=1;
        }
        
    }
    if (z==0)
    {
        printf(" no is a prime");
    }
    if (z=1)
    {
        printf("no. is not prime");
    }
    
}