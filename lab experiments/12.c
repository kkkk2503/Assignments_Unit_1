#include<stdio.h>

int main()
{
    int a,i,j,k=1;
    printf("Enter a number: ");	
    scanf("%d",&a);
    printf("triangle with columns having same numbers\n");
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }  
    printf("triangle with stars\n");
    for ( i = 1; i <=a; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("triangle with numbers in ascending order\n");
     for ( i = 1; i <=a; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    printf("triangle with rows having same numbers\n");
    for ( i = 1; i <=a; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    printf("vertical pyramid\n");
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = a - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}