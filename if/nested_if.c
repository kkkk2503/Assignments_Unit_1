#include <stdio.h>
int main()
{
int num;
printf("enter a number");
scanf("%d",&num);
if (num%2==0)
{
   printf("number is even");
    }  

else
 {    
    if (num>0)
    {
      int n,i,z;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            z=1;
        }
        
    }
    if (z==0)
    {
        printf(" no is a prime");
    }
    if (z=1)
    {
        printf("no. is not prime");
    } 
   }
   printf("number is odd");
}
}
