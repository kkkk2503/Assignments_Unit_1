#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, vowels = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
    }
    printf("Number of vowels: %d\n", vowels);
    return 0;
}