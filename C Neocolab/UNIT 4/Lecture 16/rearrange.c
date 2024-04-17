// Single File Programming Question

// Problem Statement




// You are given an array of integers, and your task is to write a program to find and print the maximum difference j - i such that arr[j] > arr[i]. Input the size of the array N and its elements. Output the calculated maximum difference.




// Examples




// Input: {1, 2, 3, 4, 5, 6}

// Output: 5  (j = 5, i = 0)




// Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}

// Output: 6  (j = 7, i = 1)




// Note: This is a question asked in Amazon and Snapdeal coding tests.

// Input format :

// The first line of input consists of an integer N, representing the size of the array.

// The second line consists of N space-separated integers, representing the array elements.

// Output format :

// The output prints an integer representing the maximum difference j - i such that arr[j] > arr[i].

// If there is no maximum difference, print -1.




// Refer to the sample output for formatting specifications.

// Code constraints :

// 1 ≤ N ≤ 10

// 1 ≤ array elements ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 1 2 3 4 5 6
// Output 1 :
// 5
// Input 2 :
// 9
// 34 8 10 3 2 80 30 33 1
// Output 2 :
// 6
// Input 3 :
// 6
// 6 5 4 3 2 1
// Output 3 :
// -1
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. Single File Programming Question

// Problem statement




// Jaskaran Singh is grappling with a programming task involving rearranging an array, specifically moving all negative elements to the beginning.




// To assist him, here's a program with two functions: rearrange(arr, n), which rearranges the array, and printArray(arr, n), a utility function to print the array elements.




// Note

// The order of elements is not important here.

// Input format :

// The first line of input consists of an integer N representing the size of the array.

// The second line of input consists of N space-separated integers arr[i], representing the array elements.

// Output format :

// The output displays the rearranged array of elements with negative elements placed at the beginning, separated by a space.




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// -100 ≤ arr[i] ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 2 -3 4
// Output 1 :
// -3 2 4 

// Input 2 :
// 7
// 9 -100 -45 -89 -34 -36 100

// Output 2 :
// -100 -45 -89 -34 -36 9 100 

// Input 3 :
// 10
// 34 -1 37 -48 -7 -98 -99 100 1 78 
// Output 3 :
// -1 -48 -7 -98 -99 34 37 100 1 78 

// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. 


#include <stdio.h>

// Function to rearrange the array moving negative elements to the beginning
void rearrange(int arr[], int n) {
    int i, j = 0;

    // Traverse the array
    for (i = 0; i < n; i++) {
        // If current element is negative, swap with element at index j
        if (arr[i] < 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

// Utility function to print the array elements
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    // Input variables
    int N, arr[10], i;

    // Input: size of the array
    scanf("%d", &N);

    // Input: array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Rearrange the array
    rearrange(arr, N);

    // Output: rearranged array
    printArray(arr, N);

    return 0;
}// You are using GCC
