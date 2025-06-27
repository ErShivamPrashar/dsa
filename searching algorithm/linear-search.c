#include <stdio.h>

void linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found in the array\n");
}

int main()
{
    int arr[] = {13, 24, 53, 64, 52};
    int size = sizeof(arr) / sizeof(int);
    int key = 52;

    linear_search(arr, size, key);
    return 0;
}