#include<stdio.h>

 struct Student 
{
    char name[50];
    int roll;
    int marks;
 } 
Student;
int main()
{
struct Student student[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name of students:\n");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("Enter roll number:\n");
        scanf("%d", &student[i].roll);
        printf("Enter marks:\n");
        scanf("%d", &student[i].marks);
        getchar();
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("\n\nDisplaying Information of student %d\n",i+1);
        printf("Name: ");
        fputs(student[i].name, stdout);
        printf("Roll number: %d\n", student[i].roll);
        printf("Marks: %d\n", student[i].marks);
    }
    return 0;
}