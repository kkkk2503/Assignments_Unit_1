#include<stdio.h>

int main()
{
    int food;
    printf("welcome\n ");
    printf("select 1 for coffee\n ");
    printf("select 2 for machiato\n ");
    printf("select 3 for macroon\n ");
    printf("select 4 for croissant\n ");
    printf("select 5 for bruschetta\n ");
    printf("select 6 for afogato\n ");
    printf("enter your number");
    scanf("%d",&food);
    switch (food)
    {
    case 1:
    printf("you selected coffee ");
        break;
    case 2:
    printf("you selected machiato ");
        break;
    case 3:
    printf("you selected macroon ");
        break;
    case 4:
    printf("you selected croissant ");
        break;
    case 5:
    printf("you selected bruschetta ");
        break;
    case 6:
    printf("you selected afogato ");
        break;
    default:
    printf("no dish available ");
        break;
    }
    return 0;
}