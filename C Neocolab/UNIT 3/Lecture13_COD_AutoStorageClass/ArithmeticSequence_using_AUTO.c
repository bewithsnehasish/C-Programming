// Single File Programming Question
// Problem Statement



// Mathew is developing a program to determine whether the digits of a given integer form an arithmetic sequence. An arithmetic sequence is a sequence of numbers in which the difference between consecutive terms is constant.



// Write a program that accomplishes this task using the auto keyword for local variable declarations.



// Example: Let us assume the number is 1234, the difference between all consecutive digits is 1, which is constant. So it forms an arithmetic sequence.

// Input format :
// The input consists of an integer N declared as an auto variable, representing the number to be checked.

// Output format :
// If the digits of N form an arithmetic sequence, the output prints "Yes".

// Otherwise, the output prints "No".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 106

// Sample test cases :
// Input 1 :
// 1234
// Output 1 :
// Yes
// Input 2 :
// 369
// Output 2 :
// Yes
// Input 3 :
// 3214
// Output 3 :
// No

// You are using GCC
#include <stdio.h>

int checkArithmetic(int num){
    if (num == 0 || num ==1)return 0;
    else if (num < 0)num = -num;
    auto lstdi = num % 10;
    num /=10;
    auto secdi = num % 10;
    auto check = lstdi - secdi;
    while(num>0){
        int tmp = num % 10;
        num /=10;
        int tmp2 = num % 10;
        if(tmp-tmp2!=check)return 0;
    }
    return 1;
}

int main(){
    int num;
    scanf("%d ",&num);
    if(checkArithmetic(num)) printf("Yes");
    else printf("No");
}