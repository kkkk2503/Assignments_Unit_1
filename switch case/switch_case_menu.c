#include<stdio.h>

int main()
{
    int food,i,a=230,b=120,c=40,d=130,e=300,f=299;
    int quantity,quantity1,quantity2,quantity3,quantity4,quantity5,quantity6;
    int total1,total2,total3,total4,total5,total6;
    float total,tax=0.18,txtot;
    printf("welcome\n ");
    printf("select 1 for coffee \n ");
    printf("select 2 for machiato\n ");
    printf("select 3 for macroon\n ");
    printf("select 4 for croissant\n ");
    printf("select 5 for bruschetta\n ");
    printf("select 6 for afogato\n ");
    do{
    printf("enter your number");
    scanf("%d",&food);

    printf("enter your quantity");
    scanf("%d",&quantity);

    switch (food)
    {
    case 1:
    printf("you selected coffee");
    quantity1+=quantity;
    total1=quantity1*a;
        break;
    case 2:
    printf("you selected machiato ");
    quantity2+=quantity;
    total2=quantity2*b;
        break;
    case 3:
    printf("you selected macroon ");
    quantity3+=quantity;
    total3=quantity3*c;
        break;
    case 4:
    printf("you selected croissant ");
    quantity4+=quantity;
    total4=quantity4*d;
        break;
    case 5:
    printf("you selected bruschetta ");
    quantity5+=quantity;
    total5=quantity5*e;
        break;
    case 6:
    printf("you selected afogato ");
    quantity5+=quantity;
    total6=quantity6*f;
        break;
    default:
    printf("no dish available ");
        break;
    }
    printf("\nDo you want to order anything else? (0/1): ");
    scanf("%d", &i);
    }
    while(i==1);

    quantity=quantity1+quantity2+quantity3+quantity4+quantity5+quantity6;
    total=total1+total2+total3+total4+total5+total6;
    printf(" coffee %d quantity total cost %d\n",quantity1,total1);
    printf(" machiato %d quantity total cost %d\n",quantity2,total2); 
    printf(" macroon %d quantity total cost %d\n",quantity3,total3);
    printf(" croissant %d quantity total cost %d\n",quantity4,total4);
    printf(" bruschetta %d quantity total cost %d\n",quantity5,total5);
    printf(" afogato %d quantity total cost %d\n",quantity6,total6);
    printf("total quantity is %d",quantity);
    printf(" your total is %d",total);
    return 0;
}