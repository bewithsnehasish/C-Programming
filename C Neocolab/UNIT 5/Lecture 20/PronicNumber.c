// Single File Programming Question
// Problem Statement



// Olaf is a student who recently learned about pronic numbers in his mathematics class.



// Pronic numbers are those that can be expressed as the product of two consecutive integers.



// Olaf is intrigued by this concept and wants to create a program to check whether a given number is a pronic number or not. Create a program using pointers and a function named isPronic to find if the given number is pronic or not.



// Example



// Input:

// 6

// Output:

// 6 is a pronic number.

// Explanation:

// 6 = 2 * 3 i.e. 6 is a product of two consecutive integers 2 and 3.

// Input format :
// The input consists of an integer N, representing the number to be checked.

// Output format :
// If N is a pronic number, print "[N] is a pronic number."

// Otherwise, print "[N] is not a pronic number."



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 600

// Sample test cases :
// Input 1 :
// 6
// Output 1 :
// 6 is a pronic number.
// Input 2 :
// 45
// Output 2 :
// 45 is not a pronic number.
// Input 3 :
// 600
// Output 3 :
// 600 is a pronic number.
// Input 4 :
// 57
// Output 4 :
// 57 is not a pronic number.

#include <stdio.h>

int isPronic(int *num) {
    int i = 1;
    while (i * (i + 1) <= *num) {
        if (i * (i + 1) == *num) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (isPronic(&N)) {
        printf("%d is a pronic number.\n", N);
    } else {
        printf("%d is not a pronic number.\n", N);
    }
    
    return 0;
}// You are using GCC
