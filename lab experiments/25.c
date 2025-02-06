#include <stdio.h>
#define MAX_student 100
struct student {
    int rollno;
    char name[50];
    float marks;
};
int main() {
    struct student students[MAX_student];
    int n, i;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Salary: ");
        scanf("%f", &students[i].marks);
    }
    for (i = 0; i < n; i++) {
        printf("student %d:\n", i + 1);
        printf("ID: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Salary: %.2f\n", students[i].marks);
    }
    return 0;
}