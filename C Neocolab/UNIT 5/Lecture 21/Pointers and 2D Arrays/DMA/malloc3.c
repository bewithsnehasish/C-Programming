// Single File Programming Question

// Problem Statement




// Develop a program for a security system that evaluates the symmetry of a sequence of a security code. The program dynamically allocates memory using malloc to store the code, checks if the sequence is symmetric, and outputs appropriate messages.




// The sequence is considered symmetric if the first half is identical to the reverse of the second half.




// Note: This program assumes that the security code size is always even, as it checks symmetry by comparing elements from both ends.

// Input format :

// The first line consists of an integer N, representing the size of the security code sequence.

// The second line consists of N space-separated integers, representing the security code elements.

// Output format :

// If the security code is symmetric, print "Yes, the code is symmetrical."

// Otherwise, print "No, the code is not symmetrical."




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// N is always even.

// 4 ≤ N ≤ 16

// 0 ≤ Each security code element ≤ 9

// Sample test cases :
// Input 1 :
// 4
// 1 0 0 1
// Output 1 :
// Yes, the code is symmetrical.
// Input 2 :
// 16
// 1 7 8 9 5 4 0 1 4 5 6 9 8 7 1 1
// Output 2 :
// No, the code is not symmetrical.
// Input 3 :
// 6
// 0 1 2 2 1 0
// Output 3 :
// Yes, the code is symmetrical.
// Input 4 :
// 6
// 0 1 2 3 4 0
// Output 4 :
// No, the code is not symmetrical.
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <stdio.h>
#include <stdlib.h>

int isSymmetric(int* code, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (code[i] != code[n - i - 1]) {
            return 0;  // Not symmetric
        }
    }
    return 1;  // Symmetric
}

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the security code

    int* code = (int*)malloc(n * sizeof(int));  // Allocate memory for the code

    // Read the elements of the security code
    for (int i = 0; i < n; i++) {
        scanf("%d", &code[i]);
    }

    // Check if the code is symmetric
    if (isSymmetric(code, n)) {
        printf("Yes, the code is symmetrical.\n");
    } else {
        printf("No, the code is not symmetrical.\n");
    }

    free(code);  // Free the dynamically allocated memory

    return 0;
}