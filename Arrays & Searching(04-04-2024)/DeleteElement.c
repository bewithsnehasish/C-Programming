// WAP to delete elements in any array 

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, pos, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position.\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deleting element at position %d:\n", pos);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
