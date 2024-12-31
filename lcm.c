#include<stdio.h>

int main()
{
    int num1,num2,lcm,a;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    a=(num1>num2)?num1:num2;
    for (lcm = a; lcm <= num1 * num2; lcm += a) 
    {
        if (lcm % num1 == 0 && lcm % num2 == 0) 
        {
            break;
        }
    }
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}