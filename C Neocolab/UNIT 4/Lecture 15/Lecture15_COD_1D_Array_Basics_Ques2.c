// Single File Programming Question
// Problem Statement



// Raj, a dedicated student, is developing a program to calculate the weighted average of his scores. The program will first take an integer N, indicating the number of subjects. For each subject, it will input an integer score and a float weight. The program will then compute and display the weighted average of these scores.



// The weighted average allows Raj to account for different subjects' varying importance or difficulty. Some subjects might be more critical for his overall academic goals, so he assigns them a higher weight. Assist Raj in completing the program successfully.



// Formula:

// ￼

// Input format :
// The first line consists of a single integer value n, representing the number of subjects.

// The next n lines contain two space-separated values, representing the score and its corresponding weight of each subject.

// Output format :
// The output displays a single floating-point value representing the weighted average of the scores, rounded off to two decimal places.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 2 ≤ n ≤ 10

// 0 ≤ score ≤ 100

// 0.0 ≤ weightage ≤ 10.0

// Sample test cases :
// Input 1 :
// 4
// 75 0.20
// 95 0.35
// 85 0.15
// 65 0.30
// Output 1 :
// 80.50
// Input 2 :
// 5
// 91 0.10
// 65 0.15
// 80 0.20
// 73 0.25
// 68 0.30
// Output 2 :
// 73.50



// You are using GCC
#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    
    float weighted_sum = 0.0, total_weight = 0.0;
    
    for(int i = 0; i < n ; i++){
        int score; 
        float weight;
        scanf("%d %f",&score,&weight);
        
        weighted_sum += score * weight;
        total_weight += weight ;
        
    }
    
    float weighted_average = weighted_sum / total_weight;
    
    printf("%.2f",weighted_average);
}