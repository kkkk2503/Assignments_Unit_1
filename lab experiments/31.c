#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void write_records(const char *filename) {
    FILE *file = fopen(filename.txt, "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    Employee employees[] = {
        {1, "Alice", 50000},
        {2, "Bob", 60000},
        {3, "Charlie", 70000}
    };

    fwrite(employees, sizeof(Employee), 3, file);
    fclose(file);
}

void display_records(const char *filename) {
    FILE *file = fopen(filename.txt, "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    Employee emp;
    printf("Employee Records:\n");
    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

void update_salary(const char *filename, int id, float new_salary) {
    FILE *file = fopen(filename.txt, "rb+");
    if (file == NULL) {
        printf("Error opening file for updating!\n");
        return;
    }

    Employee emp;
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            emp.salary = new_salary;
            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);
            break;
        }
    }

    fclose(file);
}

int main() {
    const char *filename = "employees.txt";

    write_records(filename);
    display_records(filename);

    int id;
    float new_salary;
    printf("Enter the ID of the employee to update the salary: ");
    scanf("%d", &id);
    printf("Enter the new salary: ");
    scanf("%f", &new_salary);

    update_salary(filename, id, new_salary);
    display_records(filename);

    return 0;
}