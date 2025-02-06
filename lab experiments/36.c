#include <stdio.h>
#include <string.h>
void sort_names(char names[][50], int n) 
{
    char temp[50];
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = i+1; j < n; j++) 
        {
            if (strcmp(names[i], names[j]) > 0) 
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();
    char names[n][50];
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) 
    {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    sort_names(names, n);

    printf("Sorted names in alphabetical order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", names[i]);
    }

    return 0;
}