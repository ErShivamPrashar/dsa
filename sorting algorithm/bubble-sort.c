#include<stdio.h>



void bubble_sort(int arr[], int n)
{
int f=0;
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
     temp = arr[j];
     arr[j] = arr[j+1];
     arr[j+1] = temp;
     f=0;
            }
        }
        if(f){
            return;
        }
    }
    
}



int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
   bubble_sort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}