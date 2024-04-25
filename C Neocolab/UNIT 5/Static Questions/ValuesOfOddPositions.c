// Single File Programming Question

// Problem Statement




// Create a program that takes an integer N as input, creates an array of N integers, accepts N values into the array, and prints the values at odd positions (that is the values at position 1, 3, 5 and so on) using pointers.




// Note: This question helps in clearing the conceptual interviews of service-based companies.

// Input format :

// The first line of input consists of an integer N, representing the number of array elements.

// The second line consists of N space-separated integers, representing the array elements.

// Output format :

// The output prints N integers representing the values at odd positions.

// Code constraints :

// 1 ≤ N ≤ 10

// 1 ≤ array elements ≤ 100

// Sample test cases :
// Input 1 :
// 6 
// 12 56 23 33 57 36
// Output 1 :
// 12 23 57 
// Input 2 :
// 7
// 2 3 4 5 6 8 7
// Output 2 :
// 2 4 6 7 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC

#include <stdio.h>

int main(){
    int N ;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0;i < N; i++){
        scanf("%d",&arr[i]);
        if(i%2==0)printf("%d ",arr[i]);
    }
    
}