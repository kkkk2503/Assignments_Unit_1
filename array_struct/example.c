#include<stdio.h>

 struct Student 
{
    char name[50];
    int roll;
    float marks;
 } 
student;
int main()
{
struct Student student;
    printf("Enter name of students:\n");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number:\n");
    scanf("%d", &student.roll);
    printf("Enter marks:\n");
    scanf("%f", &student.marks);


    printf("Displaying Information\n");
    printf("Name: ");
    fputs(student.name, stdout);
    printf("Roll number: %d\n", student.roll);
    printf("Marks: %f\n", student.marks);

    return 0;
}