#include <stdio.h>

int main() {
    int i, j, a;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &a);

    // Upper part of the pyramid
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the pyramid
    for (i = a - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}