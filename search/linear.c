#include<stdio.h>
//linear search
int main()
{
    int n,i,search;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    printf("enter the element %d of the array: ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("element found at position %d",i+1);
            break;
        }
    }
}