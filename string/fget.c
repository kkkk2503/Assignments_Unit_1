#include<stdio.h>
#include<string.h>
int main()
{
    // defining buffer
    char buf[20];

    // using fgets to take input from stdin
    puts("enetr string");
    fgets(buf,20, stdin);
    printf("string is: %s\n", buf);
}