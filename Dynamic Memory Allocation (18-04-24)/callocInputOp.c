#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr = NULL; // Pointer to store the dynamically allocated array
    int n;           // Number of elements in the array
    int size;        // Size of the array

    // Prompt the user to enter the initial size of the array
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array using calloc
    arr = (int *)calloc(size, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Prompt the user to enter elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array
    printArray(arr, n);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}