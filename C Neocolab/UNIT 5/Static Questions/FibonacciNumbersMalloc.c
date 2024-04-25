// Single File Programming Question

// Problem Statement




// Steve is interested in Fibonacci numbers. Help him write a program that identifies and displays the Fibonacci numbers present in the array using dynamic memory allocation, assuming that at least one Fibonacci number is present in the array.




// Note: Use malloc() for memory allocation.

// Input format :

// The first line of input consists of an integer N, representing the size of the array.

// The second line consists of N space-separated integers, representing the elements of the array.

// Output format :

// The output displays the Fibonacci numbers present in the array, separated by a space.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 20

// 1 ≤ element ≤ 1000

// At least one Fibonacci number is present in the array.

// Sample test cases :
// Input 1 :
// 5
// 8 12 15 18 13

// Output 1 :
// 8 13 
// Input 2 :
// 1
// 1
// Output 2 :
// 1 
// Input 3 :
// 20
// 423 909 24 233 286 279 453 554 321 94 519 1000 157 866 93 946 169 235 867 25
// Output 3 :
// 233 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.




#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is a Fibonacci number
int isFibonacci(int num) {
    int a = 0, b = 1, c;
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == num);
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isFibonacci(arr[i])) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("No Fibonacci numbers found in the array.");
    }

    free(arr);
    return 0;
}
