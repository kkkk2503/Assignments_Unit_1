#include<stdio.h>
#include <string.h>
struct employee
{
char name[50];
char position[50];
int id;
}
employee;
int main()
{
    struct employee emp1, emp2;
    strcpy(emp1.name, "kartik ");
    strcpy(emp1.position, "ceo");
    emp1.id=585858585;

    strcpy(emp2.name, "aryan");
    strcpy(emp2.position, "game developer");
    emp2.id=5634365;
    
    printf("detail of employee 1 \nname: %s\n",emp1.name);
    printf("position: %s\n",emp1.position);
    printf("id number: %d\n",emp1.id);

    printf("\n\ndetail of employee 2 \nname: %s\n",emp2.name);
    printf("position: %s\n",emp2.position);
    printf("id number: %d\n",emp2.id);

    return 0;
}