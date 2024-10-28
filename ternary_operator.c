#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    (m>n)?printf("m is greater than n that is %d > %d", m, n): printf("n is greater than m that is %d > %d",n, m);

    return 0;
}