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
// Extra spaces and new line characters in the program output will result in the failure of the test case.  Single File Programming Question

// Problem Statement




// Given an integer array sequence of size n, write a program to find the equilibrium index of the array.




// The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 




// Example




// Input: 

// 7

// -7 1 5 2 -4 3 0

// Output:

// 3

// Explanation:

// 3 is an equilibrium index, because, A[0] + A[1] + A[2] = A[4] + A[5] + A[6].




// Note: This is a question asked in Amazon and Microsoft coding tests.

// Input format :

// The first line of input consists of an integer n, representing the size of the array.

// The second line consists of n space-separated integers, representing the array elements.

// Output format :

// The output prints an integer representing the equilibrium index of the given array.

// If there is no such index found, print "No equilibrium index found."




// Refer to the sample output for formatting specifications.

// Code constraints :

// 1 ≤ n ≤ 10

// -10 ≤ array elements ≤ 10

// Sample test cases :
// Input 1 :
// 7
// -7 1 5 2 -4 3 0
// Output 1 :
// 3
// Input 2 :
// 3
// 1 2 3
// Output 2 :
// No equilibrium index found.
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. 


#include <stdio.h>

// Function to find the equilibrium index of the array
int findEquilibriumIndex(int arr[], int n) {
    int total_sum = 0, left_sum = 0;

    // Calculate the total sum of elements in the array
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    // Traverse the array and find the equilibrium index
    for (int i = 0; i < n; i++) {
        // Update total sum by subtracting the current element
        total_sum -= arr[i];
        
        // If left sum equals total sum, return current index as equilibrium index
        if (left_sum == total_sum) {
            return i;
        }

        // Update left sum by adding the current element
        left_sum += arr[i];
    }

    // If no equilibrium index found, return -1
    return -1;
}

int main() {
    // Input variables
    int n, arr[10];

    // Input: size of the array
    scanf("%d", &n);

    // Input: array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the equilibrium index
    int equilibrium_index = findEquilibriumIndex(arr, n);

    // Output: equilibrium index or "No equilibrium index found."
    if (equilibrium_index == -1) {
        printf("No equilibrium index found.");
    } else {
        printf("%d", equilibrium_index);
    }

    return 0;
}
