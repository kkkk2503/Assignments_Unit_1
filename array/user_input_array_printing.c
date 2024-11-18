   #include<stdio.h>

int main()
{
    int i,array[5];
    printf("enter the elements of array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",array[i]);
    }
    
}