#include<stdio.h>
#include<string.h>
int main()
{
    int number,r,n,sum,su;  
    printf("enter your number");
    scanf("%d",&number);
      n=number;
       sum=0;
        su=0;
       
    while(n>0)
    {
        r=n%10; //Extracts last digit
        sum+=r;
         su=su*10+r;
        n=n/10; //removes last digit
    }   
printf("The entered number %d has an addition of %d\n",number,sum);
     if(su==number)
    {
        printf("%d is a pallidrome",su);
    }
    else
    {
        printf("not a pallindrome");
    }
return 0;
}