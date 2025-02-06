#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float grade;
} Student;

void write_records(const char *filename, Student students[], int n) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    fwrite(students, sizeof(Student), n, file);
    fclose(file);
}

void read_records(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    Student student;
    printf("Student Records:\n");
    while (fread(&student, sizeof(Student), 1, file)) {
printf("ID: %d, Name: %s, Grade: %.2f\n", student.id, student.name, student.grade);
    }

    fclose(file);
}

void append_record(const char *filename, Student new_student) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    fwrite(&new_student, sizeof(Student), 1, file);
    fclose(file);
}

int main() {
    const char *filename = "students.dat";

    Student students[] = {
        {1, "Alice", 85.5},
        {2, "Bob", 90.0},
        {3, "Charlie", 78.0}
    };
    int n = sizeof(students) / sizeof(students[0]);

    write_records(filename, students, n);
    read_records(filename);

    Student new_student;
    printf("Enter new student record:\n");
    printf("ID: ");
    scanf("%d", &new_student.id);
    printf("Name: ");
    scanf("%s", new_student.name);
    printf("Grade: ");
    scanf("%f", &new_student.grade);

    append_record(filename, new_student);
    read_records(filename);

    return 0;
}