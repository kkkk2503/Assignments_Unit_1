#include<stdio.h>

int main()
{
    int i,j,row,column;
    printf("enter no. of rows ");
    scanf("%d",&row);
    printf(" number of columns");
    scanf("%d",&column);
    int array[row][column];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("array element row %d and column %d  ",i+1,j+1);
            scanf("%d",&array[i][j]);
        } 
    }
    printf("your matrix is\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
         printf("%d  ",array[i][j]);
        }
        printf("\n");
    }  
}