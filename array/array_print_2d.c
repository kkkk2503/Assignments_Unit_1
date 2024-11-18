#include<stdio.h>

int main()
{
    int i,j,array[2][3]={{3,5,8},{5,7,8}};
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
        printf("%d  ", array[i][j]);
    }
    printf("\n");
    }
}