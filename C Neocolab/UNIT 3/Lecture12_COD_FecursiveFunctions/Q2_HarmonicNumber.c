// Problem Statement

// Sarah is working on a mathematical project and needs to calculate the nth harmonic number as part of her task.

// Write a program that takes an integer input n and uses a recursive function called harmonicNumber to find the nth harmonic number.

// The harmonic number Hn ​ represents the sum of the reciprocals of the natural numbers up to n:
// Input format :
// The input consists of an integer n.
// Output format :
// The output displays a double-point number representing the nth harmonic number, rounded to two decimal places.

// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 100

// Sample test cases :
// Input 1 :
// 1
// Output 1 :
// 1.00
// Input 2 :
// 58
// Output 2 :
// 4.65
// Input 3 :
// 97
// Output 3 :
// 5.16 

// You are using GCC
#include <stdio.h>

double harmonicNumber(int num){
    if (num == 1)return 1.0;
    else return 1.0/num + harmonicNumber(num - 1);
}

int main(){
    int num;
    scanf("%d",&num);
    double result = harmonicNumber(num);
    printf("%.2lf",result);
}