// In a construction project, the architect needs to calculate the product of the secant and tangent values for a given angle (in degrees) to determine specific structural properties.



// Write a program to assist the architect in obtaining this product accurately.



// Formula

// radians = angle * pi / 180.0
// secant value = 1.0/cos(radians)

// Note: Use M_PI constant for pi calculation and cos() and tan() inbuilt functions for calculations.

// Input format :
// The input consists of a double-value n, representing the angle in degrees.

// Output format :
// The output prints "Product: " followed by a double value representing the product of secant and tangent values of the given angle, rounded to four decimal places.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 0.01 < n ≤ 180.00

// Sample test cases :
// Input 1 :
// 56.45
// Output 1 :
// Product: 2.7286
// Input 2 :
// 5.66
// Output 2 :
// Product: 0.0996
// Input 3 :
// 180.00
// Output 3 :
// Product: 0.0000
// Input 4 :
// 0.01
// Output 4 :
// Product: 0.0002


// You are using GCC
#include <stdio.h>
#include <math.h>


int main(){
    double n;
    scanf("%lf",&n);
    double radians = (n * M_PI) / 180.0 ;
    double secant = 1.0/cos(radians);
    double tangent = tan(radians);
    printf("Product: %.4lf",secant*tangent);
}