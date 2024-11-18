#include <stdio.h>

int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("ENTER ROWS OF 1ST MATRIX ");
    scanf("%d",&r1);
    printf("enter columns of 1st matrix ");
    scanf("%d",&c1);
    printf("ENTER ROWS OF 2nd MATRIX ");
    scanf("%d",&r2);
    printf("enter columns of 2nd matrix ");
    scanf("%d",&c2);
    int a[r1][c1],b[r2][c2];
    if(c1!=r2)
    {
    printf("MULTIPLICATION NOT POSSIBLE");
    }
    else{
    int c[r1][c2];
    for (i = 0; i < r1; i++) 
    {
    for (j = 0; j < c2; j++) 
        {
        c[i][j] = 0;
        }
    }
    printf("ENTER ELEMENTS OF 1ST MATRIX \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
    printf("enter element of array [%d] [%d]",i+1,j+1);
    scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER ELEMENTS OF 2nd MATRIX \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
    printf("enter element of array [%d] [%d]",i+1,j+1);
    scanf("%d",&b[i][j]);
        }
    }
    printf("this is matrix 1 \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
    printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n this is matrix 2\n");
    for(i=0;i<r2;i++)
        {
        for(j=0;j<c2;j++)
        {
    printf(" %d ",b[i][j]);
        }
        printf("\n");
        }
        // Matrix multiplication: c = a * b
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                for (k = 0; k < c1; k++) 
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
  // Print result matrix C
   printf("RESULTANT MATRIX AFTER MULTIPLICATION\n");
     for (i = 0; i < r1; i++) 
    {
     for (j = 0; j < c2; j++) 
        {
        printf("%d ", c[i][j]);
        }
     printf("\n");
    }
    }
    return 0;
}