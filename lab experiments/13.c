#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}
int modulus(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}
int main() {
    int choice, a, b;
    float result = 0;
    char cont, use_prev_result;

    do {
        printf("Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

printf("Do you want to use the result of the previous calculation? (y/n): ");
        scanf(" %c", &use_prev_result);

        if (use_prev_result == 'y' || use_prev_result == 'Y') {
            a = (int)result;
            printf("Enter the second integer: ");
            scanf("%d", &b);
        } else {
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1:
                result = add(a, b);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(a, b);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(a, b);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                result = divide(a, b);
                printf("Result: %.2f\n", result);
                break;
            case 5:
                result = modulus(a, b);
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &cont); // Note the space before %c to consume any leftover newline character

    } while (cont == 'y' || cont == 'Y');
    return 0;
}