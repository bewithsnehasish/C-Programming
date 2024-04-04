// Wap to search an element in an array using two different tabs linear search and binary search

#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  
        }
    }
    return -1;  
}


int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;  
        } else if (arr[mid] < x) {
            low = mid + 1;  
        } else {
            high = mid - 1;  
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int linearIndex = linearSearch(arr, n, x);
    if (linearIndex != -1) {
        printf("Element %d found at index %d using linear search.\n", x, linearIndex);
    } else {
        printf("Element %d not found using linear search.\n", x);
    }

    int binaryIndex = binarySearch(arr, 0, n - 1, x);
    if (binaryIndex != -1) {
        printf("Element %d found at index %d using binary search.\n", x, binaryIndex);
    } else {
        printf("Element %d not found using binary search.\n", x);
    }

    return 0;
}
