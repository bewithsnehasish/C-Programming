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
    int element;     // Element to add

    // Prompt the user to enter the initial size of the array
    printf("Enter the initial size of the array: ");
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

    // Print the array
    printArray(arr, n);

    // Prompt the user to enter an additional element
    printf("Enter an additional element: ");
    scanf("%d", &element);

    // Resize the array using realloc to accommodate the additional element
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    // Check if realloc was successful
    if (arr == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        return 1;
    }

    // Add the additional element to the end of the array
    arr[n] = element;

    // Increment the count of elements
    n++;

    // Print the updated array
    printArray(arr, n);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}