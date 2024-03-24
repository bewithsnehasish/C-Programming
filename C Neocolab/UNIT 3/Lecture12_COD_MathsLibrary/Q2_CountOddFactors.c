// Given a range [n, m], find the count of elements that have an odd number of factors in the given range (n and m inclusive). Use mathematical library functions to solve the problem.



// Example 1



// Input: n = 5, m = 100

// Output: 8

// Explanation: The numbers with odd factors between 5 and 100 are 9, 16, 25, 36, 49, 64, 81 and 100. Hence the output is 8.



// Example 2

// Input: n = 8, m = 65

// Output: 6

// Explanation: The numbers with odd factors between 8 and 65 are 9, 16, 25, 36, 49, and 64. Hence the output is 6.



// Your Task: Write a function named countOddFactors which takes two integers n and m as input and returns the answer.



// Note: This question was asked in Wipro coding test.

// Input format :
// The input consists of two space-separated integers n and m, representing the range.

// Output format :
// The output prints an integer, representing the count of elements that have an odd number of factors in the given range.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n, m ≤ 105

// Sample test cases :
// Input 1 :
// 5 100
// Output 1 :
// 8
// Input 2 :
// 8 120
// Output 2 :
// 8
// Input 3 :
// 8 65
// Output 3 :
// 6

//**Unsolved Solution**


// You are using GCC
#include <stdio.h>

int countOddFactors(int num1){
    int count = 0 ;
    for(int i=1;i*i<num1;i++){
        if(num1%i==0){
            count +=1;
            if(i!=num1/i)count++;
        }
    }
    if(count%2==0)return 0;
    return 1;
}

int main(){
    int num1 ,num2,count=0;
    scanf("%d %d",&num1,&num2);
    for(int i = num1; i <= num2; i++){
        if(countOddFactors(i)) count+=1;
    }
    printf("%d",count);
}