// Single File Programming Question

// Problem Statement




// Arjun wants to write a program that takes an integer size as input, allocates memory for two integer arrays of the same size, and reads integers into both arrays.




// Multiply the corresponding elements of both arrays, store the results in a new array, and finally print the elements of the final array. Help Arjun to achieve this ensuring memory is allocated using malloc for the arrays.

// Input format :

// The first line of input consists of an integer N, representing the size of the array.

// The second line consists of N space-separated integers, representing the elements of the first array.

// The third line consists of N space-separated integers, representing the elements of the second array.

// Output format :

// The output prints N space-separated integers, representing the result array obtained by multiplying corresponding elements of the first and second array.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 2 ≤ N ≤ 20

// 50 ≤ Each element ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 56 78 69
// 69 86 75
// Output 1 :
// 3864 6708 5175 
// Input 2 :
// 6
// 56 51 75 65 82 98 
// 89 97 73 61 76 75
// Output 2 :
// 4984 4947 5475 3965 6232 7350 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  

    int* arr1 = (int*)malloc(n * sizeof(int));
    int* arr2 = (int*)malloc(n * sizeof(int));
    int* result = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    free(arr1);
    free(arr2);
    free(result);

    return 0;
}