#include <stdio.h>
#include <math.h>

int main() {
    double number, base, exponent, result;

    // Calculate square root
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &number);
    if (number < 0) {
        printf("Error: Cannot calculate the square root of a negative number.\n");
    } else {
        result = sqrt(number);
        printf("The square root of %.2f is %.2f\n", number, result);
    }

    // Calculate power
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, result);

    return 0;
}