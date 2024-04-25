// Single File Programming Question

// Problem Statement




// Develop a program that helps a user find and print the first N even numbers. The program should take the user's input for N and use a function named printEvenElements with a pointer to accomplish this task, displaying the sequence of even numbers as output.




// Note: This question helps in clearing technical coding tests of service-based companies.

// Input format :

// The input consists of an integer N.

// Output format :

// The output prints N even numbers, starting from 2.

// Code constraints :

// 1 ≤ N ≤ 100

// Sample test cases :
// Input 1 :
// 10
// Output 1 :
// 2 4 6 8 10 12 14 16 18 20 
// Input 2 :
// 19
// Output 2 :
// 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 
// Code Size : 1024 kb
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



// You are using GCC
#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= num;i++)printf("%d ",2*i);
}