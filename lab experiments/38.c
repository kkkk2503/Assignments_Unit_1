#include <stdio.h>
int binary_search(int arr[], int size, int key) 
{
    int low = 0, high = size - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) 
        {
            return mid; 
        }
         else if (arr[mid] < key) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    return -1; // Key not found
}
int main() 
{
    int n, key, result;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter %d sorted values:\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search for: ");
    scanf("%d", &key);

    result = binary_search(arr, n, key);

    if (result != -1) 
    {
        printf("Key %d found at index %d.\n", key, result);
    }
    else 
    {
        printf("Key %d not found in the array.\n", key);
    }
    return 0;
}