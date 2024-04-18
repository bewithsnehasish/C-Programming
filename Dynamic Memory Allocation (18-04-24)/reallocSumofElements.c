#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL; // Pointer to store the dynamically allocated array
    int n;           // Number of elements in the array
    int sum = 0;     // Variable to store the sum of elements

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

    // Calculate the sum of elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum of elements
    printf("Sum of elements: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}