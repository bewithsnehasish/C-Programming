// Problem Statement



// Maria, an architect, is working on designing a unique garden feature. She plans to include tetrahedron-shaped sculptures of varying sizes.



// Write a program to assist Maria in calculating the volumes of these tetrahedrons based on their different edge lengths. The program should take the edge length n as input and output the corresponding volume for her architectural designs.



// Formula: Volume of a tetrahedron = n3 / 6√2 where n is the edge length.



// Note: The power and square root are calculated using pow() and sqrt() inbuilt functions.

// Input format :
// The input consists of a double value n, representing the edge length of the tetrahedron sculpture.

// Output format :
// The output prints "Volume of the tetrahedron: " followed by a double value representing the volume of the tetrahedron sculpture, rounded off to two decimal places.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 1.0 ≤ n ≤ 20.0

// Sample test cases :
// Input 1 :
// 1.0
// Output 1 :
// Volume of the tetrahedron: 0.12
// Input 2 :
// 3.9
// Output 2 :
// Volume of the tetrahedron: 6.99
// Input 3 :
// 20.0
// Output 3 :
// Volume of the tetrahedron: 942.81


// You are using GCC
#include <stdio.h>
#include <math.h>

int main(){
    double n ;
    scanf("%lf",&n);
    double vol = pow(n,3)/(6*sqrt(2));
    printf("Volume of the tetrahedron: %.2lf",vol);
}