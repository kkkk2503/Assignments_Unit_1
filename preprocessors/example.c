#include <stdio.h> // Demonstrates #include

#define PI 3.14159 // Demonstrates #define

#undef PI // Demonstrates #undef

#define DEBUG // Define DEBUG for conditional compilation

int main() {
    #ifdef PI
        printf("PI is defined and its value is: %f\n", PI);
    #else
        printf("PI is not defined.\n");
    #endif

    #ifndef MAX
        #define MAX 100
        printf("MAX is defined as: %d\n", MAX);
    #endif

    #ifdef DEBUG
        printf("Debug mode is enabled.\n");
    #else
        printf("Debug mode is not enabled.\n");
    #endif

    return 0;
}