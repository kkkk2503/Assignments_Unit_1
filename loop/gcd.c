#include<stdio.h>

int main()
{
    int num1,num2,gcd,a;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    a=(num1>num2)?num1:num2;
    for ( gcd= a; gcd >0; gcd--) 
    {
        if (num1 % gcd == 0 && num2 % gcd == 0) 
        {
            break;
        }
    }
    
    printf("gcd of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}