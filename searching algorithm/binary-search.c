#include<stdio.h>



void binary_search(int arr[], int size, int key) {
    int mid;
   int low = 0;
   int high = size-1;
   while (low<=high)
   {
    mid = (low+high)/2;
    if(arr[mid] == key){
        printf("Element found at index %d\n", mid);
            return; 
    }

    if(arr[mid]<key){
        low = mid+1;
    }

    else{
        high = mid-1;
    }
    
   }
   
    printf("Element not found in the array\n");
}



int main() {
    int arr[] = {13, 24, 53, 64, 52,34,67,98,56};
    int size = sizeof(arr) / sizeof(int);
    int key = 52;

   binary_search(arr, size, key);
    return 0;
}