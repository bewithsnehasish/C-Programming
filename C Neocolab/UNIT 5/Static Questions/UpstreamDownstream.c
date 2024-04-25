// Single File Programming Question

// Problem Statement




// George is on an exciting boat adventure, navigating a river upstream and downstream. He needs your expertise to determine the speed of the boat in still water. 




// Assist George by creating a program that utilizes pointers.




// Speed of boat in still water:

// Input format :

// The first line of input consists of a double value N, representing the time George spent travelling upstream.

// The second line consists of a double value M, representing the time George spent travelling downstream.

// The third line consists of a double value S, representing the speed of the stream.

// Output format :

// The output prints a double value, representing the speed of the boat in still water (in miles per hour), rounded off to two decimal places.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1.0 ≤ N ≤ 50.0

// 1.0 ≤ M ≤ 40.0

// 1.0 ≤ S ≤ 30.0

// Sample test cases :
// Input 1 :
// 3.5
// 2.7
// 5.6
// Output 1 :
// 0.72 mph
// Input 2 :
// 29.2
// 18.3
// 15.9
// Output 2 :
// 3.65 mph
// Input 3 :
// 47.0
// 38.5
// 15.6
// Output 3 :
// 1.55 mph
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



// You are using GCC
#include <stdio.h>
void check(double *N,double *M,double *S);
int main(){
    double N,M,S;
    scanf("%lf %lf %lf",&N,&M,&S);
    double calc = (S * (N-M) )/(N+M);
    printf("%.2lf mph",calc);
}