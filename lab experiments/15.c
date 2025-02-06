#include<stdio.h>

int add()
{
int r,c,i,j,;
    
    printf("ENTER ROWS OF MATRIX ");
    scanf("%d",&r);
    printf("enter columns of matrix ");
    scanf("%d",&c);
    int a[r][c],b[r][c];
    
    for (i = 0; i < r1; i++) 
    {
    for (j = 0; j < c1; j++) 
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

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
}

int matricsmultiply()
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
}
int main()
{
    int choice;
printf("enter number 1 for addition of matrices or 2 for matrix multiplication: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    add();
        break;
    case 2:
    matricsmultiply();
        break;
    default:
        break;
    }
    return 0;
}