#include<stdio.h>

int main()
{
    int answer;
    printf("which dierection is present at top of a map\n1.south\n2.east\n3.north\n4.west\nenter you answer");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
    printf("wrong answer");
        break;
    case 2:
    printf("wrong answer");
        break;
    case 3:
    printf("correct answer");
        break;
    case 4:
    printf("wrong answer");
        break;
    default:
    printf("enter a valid number");
        break;
    }
    return 0;
}