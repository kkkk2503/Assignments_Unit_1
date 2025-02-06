#include <stdio.h>

int main() {
    int n, i, z = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            z = 1;
            break;
        }
    }

    if (z == 0) {
        printf("Number %d is a prime.\n", n);
    } else {
        printf("Number %d is not prime.\n", n);
    }

    return 0;
}