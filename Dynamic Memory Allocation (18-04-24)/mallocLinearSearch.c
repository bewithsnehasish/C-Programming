#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int *arr; // Pointer to store the dynamically allocated array
    int n;    // Number of elements in the array
    int key;  // Key to search for

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Prompt the user to enter elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform linear search
    int index = linearSearch(arr, n, key);

    // Print the result
    if (index != -1) {
        printf("Key found at index: %d\n", index);
    } else {
        printf("Key not found\n");
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}