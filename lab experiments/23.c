#include <stdio.h>
#define MAX_RECORDS 100
struct Record {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Record records[MAX_RECORDS];
    int n, i;
    printf("Enter the number of records: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter details for record %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &records[i].id);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("Salary: ");
        scanf("%f", &records[i].salary);
    }
    printf("\nRecords:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printf("ID: %d\n", records[i].id);
        printf("Name: %s\n", records[i].name);
        printf("Salary: %.2f\n", records[i].salary);
    }
    return 0;
}