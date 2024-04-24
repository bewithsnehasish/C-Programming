// Single File Programming Question

// Problem Statement




// Daniel is working on a project that involves analyzing data stored in float arrays. He needs to determine whether a given float array contains only positive numbers. 




// To achieve this, he needs a program that can accurately evaluate the contents of float arrays using malloc().

// Input format :

// The first line of input consists of an integer N, representing the size of the array.

// The second line consists of N space-separated float values, representing the elements of the array.

// Output format :

// If all the array elements are positive, print "All elements are positive."

// If the array contains at least one positive element, print "At least one element is positive."

// If there are no positive elements in the array, print "No positive elements in the array."




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// -50.0 ≤ element ≤ 50.0

// Sample test cases :
// Input 1 :
// 5
// 50.0 -2.3 3.7 -4.8 5.2

// Output 1 :
// At least one element is positive.

// Input 2 :
// 4
// 1.2 3.4 2.0 5.6

// Output 2 :
// All elements are positive.

// Input 3 :
// 3
// -25.3 -19.4 -6.4

// Output 3 :
// No positive elements in the array.

// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    float* arr = (float*)malloc(n * sizeof(float));  // Allocate memory for the array

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    int allPositive = 1;    // Flag to track if all elements are positive
    int atLeastOnePositive = 0;  // Flag to track if at least one element is positive

    // Check for positive elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            atLeastOnePositive = 1;
        } else {
            allPositive = 0;
        }
    }

    // Print the appropriate output
    if (allPositive) {
        printf("All elements are positive.\n");
    } else if (atLeastOnePositive) {
        printf("At least one element is positive.\n");
    } else {
        printf("No positive elements in the array.\n");
    }

    free(arr);  // Free the dynamically allocated memory

    return 0;
}