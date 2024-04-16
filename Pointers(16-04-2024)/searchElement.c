#include <stdio.h>

int search(int *arr, int size, int element) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == element) {
            return i;
        }
    }
    return -1; // return -1 if element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;
    int index = search(arr, size, element);
    if(index != -1) {
        printf("Element %d found at index %d\n", element, index);
    } else {
        printf("Element %d not found in array\n", element);
    }
    return 0;
}