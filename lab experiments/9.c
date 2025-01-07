#include<stdio.h>

int main()
{
    int num,largest,smallest,i;
    printf("enter the number of integers you want in the list");
    scanf("%d",&num);
    int arr[num];
    printf("enter your numbers\n");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);   
    }
    largest=arr[0];
    smallest=arr[0];
    for ( i = 1; i < num; i++)
    {
       if(arr[i]>largest)
       {
        largest=arr[i];
       }
    }
    for ( i = 1; i < num; i++)
    {
       if(arr[i]<smallest)
       {
        smallest=arr[i];
       }
    }
    printf("the largest number is %d \n the smallest is %d",largest,smallest);

    
    return 0;
}