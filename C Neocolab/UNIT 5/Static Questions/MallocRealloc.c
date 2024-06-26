// Single File Programming Question

// Problem Statement




// Karthik is designing a program to manage number sequences. 




// He inputs the initial size and elements of the sequence by allocating memory using malloc(). Later, he decides to resize the sequence by providing a new size using realloc(). He then takes the additional integers required for the sequence that will be appended to the initial sequence. The program displays both the initial and resized sequences. 




// Help Karthik in developing the program.

// Input format :

// The first line of input consists of an integer N, representing the initial size of the array.

// The second line consists of N space-separated integers, representing the initial elements of the sequence.

// The third line consists of an integer M, representing the new size of the array.

// The fourth line consists of (M-N) space-separated integers, representing the additional elements for the resized sequence.

// Output format :

// The first line displays "Initial Sequence: " followed by the elements of the initial sequence, separated by a space.

// The second line displays "Resized Sequence: " followed by the elements of the resized sequence after the specified resizing.




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ Total elements after resizing (M) ≤ 25

// N < M

// 1 ≤ Each element of the sequence ≤ 100

// Sample test cases :
// Input 1 :
// 1
// 1 
// 5
// 80 15 11 85 
// Output 1 :
// Initial Sequence: 1 
// Resized Sequence: 1 80 15 11 85 
// Input 2 :
// 2
// 10 20
// 3
// 2
// Output 2 :
// Initial Sequence: 10 20 
// Resized Sequence: 10 20 2 
// Input 3 :
// 13
// 40 81 13 80 83 62 24 23 18 1 2 3 100
// 25
// 81 62 66 96 71 5 36 92 31 53 37 2
// Output 3 :
// Initial Sequence: 40 81 13 80 83 62 24 23 18 1 2 3 100 
// Resized Sequence: 40 81 13 80 83 62 24 23 18 1 2 3 100 81 62 66 96 71 5 36 92 31 53 37 2 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, *arr, *new_arr, i;

    // Input the initial size and elements of the sequence
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the new size of the sequence
    scanf("%d", &m);

    // Reallocate memory for the new sequence
    new_arr = (int *)realloc(arr, m * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    // Input the additional elements for the resized sequence
    for (i = n; i < m; i++) {
        scanf("%d", &new_arr[i]);
    }

    // Print the initial and resized sequences
    printf("Initial Sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Resized Sequence: ");
    for (i = 0; i < m; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(new_arr);

    return 0;
}
