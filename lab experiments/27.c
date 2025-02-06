#include <stdio.h>

#define MAX_phone 100

struct phone 
{
    int number;
    char name[50];  
};

int main() {
    struct phone phones[MAX_phone];
    int n, i;

    printf("Enter the number of phone: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for phone %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &phones[i].number);
        printf("Name: ");
        scanf("%s", phones[i].name);
        
    }

    for (i = 0; i < n; i++) {
        printf("phone %d:\n", i + 1);
        printf("number: %d\n", phones[i].number);
        printf("Name: %s\n", phones[i].name);
       

    return 0;
    }
}