// Single File Programming Question

// Problem Statement




// Jim is an investor who wants to analyze the performance of his investment portfolio. He has a list of the percentage returns on his investments for the past few months. 




// Jim wants to calculate the absolute deviation of each monthly return from the mean to understand the volatility of his portfolio. Help him in creating a program using pointers and a function calculateAbsoluteDeviation to find the absolute deviation.




// Mean: 

 

// where N represents the number of months and xi represents each value in the set.




// Absolute Deviation:

// where μ represents the mean.

// Input format :

// The first line of input consists of an integer N, representing the number of months.

// The second line consists of N space-separated integers, each representing the percentage return for a specific month.

// Output format :

// The output prints the double values representing absolute deviations, rounded off to two decimal places.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ percentage return ≤ 50

// Sample test cases :
// Input 1 :
// 5
// 12 23 34 41 48
// Output 1 :
// 19.60 8.60 2.40 9.40 16.40 
// Input 2 :
// 6
// 1 2 3 6 9 12

// Output 2 :
// 4.50 3.50 2.50 0.50 3.50 6.50 
// Input 3 :
// 9
// 1 2 3 5 8 4 6 9 7

// Output 3 :
// 4.00 3.00 2.00 0.00 3.00 1.00 1.00 4.00 2.00 


#include <stdio.h>
#include <math.h>

void calculateAbsoluteDeviation(int N, int *returns) {
    // Calculate the mean
    double mean = 0;
    int *ptr = returns;
    for (int i = 0; i < N; i++) {
        mean += *ptr;
        ptr++;
    }
    mean /= N;
    
    // Calculate and print the absolute deviation for each month
    ptr = returns;
    for (int i = 0; i < N; i++) {
        double deviation = fabs(*ptr - mean);
        printf("%.2lf ", deviation);
        ptr++;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    
    int returns[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &returns[i]);
    }
    
    calculateAbsoluteDeviation(N, returns);
    
    return 0;
}