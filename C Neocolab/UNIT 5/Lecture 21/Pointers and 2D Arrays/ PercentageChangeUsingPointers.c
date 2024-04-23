    // Single File Programming Question

    // Problem Statement




    // Sita is tasked with developing a program to analyze the performance change of a financial asset over a given period. Users will input the daily closing prices of the asset, and the program should calculate and display the percentage change between consecutive days using pointers.




    // Guide Sita in finishing the program.




    // Note: Percentage Change = (( Current Price−Previous Price ) / Previous Price ) x 100

    // Input format :

    // The first line of input consists of a positive integer N, representing the number of days.

    // The second line consists of N space-separated positive float values, representing the closing price on each day.

    // Output format :

    // The output displays the percentage change between consecutive days, rounded off to two decimal places.




    // Refer to the sample output for formatting specifications.

    // Code constraints :

    // In this scenario, the test cases fall under the following constraints:

    // 1 ≤ N ≤ 20

    // 1.0 ≤ closing price ≤ 100.0

    // Sample test cases :
    // Input 1 :
    // 5
    // 10.5 15.2 12.8 9.3 14.6

    // Output 1 :
    // 44.76% -15.79% -27.34% 56.99% 
    // Input 2 :
    // 6
    // 78.4 50.1 20.4 14.5 25.9 34.5

    // Output 2 :
    // -36.10% -59.28% -28.92% 78.62% 33.20%

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    float prices[N];
    for (int i = 0; i < N; i++) {
        scanf("%f", &prices[i]);
    }

    for (int i = 1; i < N; i++) {
        float change = ((prices[i] - prices[i - 1]) / prices[i - 1]) * 100;
        printf("%.2f%% ", change);
    }

    return 0;
}