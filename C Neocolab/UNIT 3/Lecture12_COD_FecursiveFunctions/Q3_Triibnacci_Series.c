// Problem Statement
// Helen is developing a program for a gaming application that involves generating a sequence of mystical numbers based on the Tribonacci series. She needs to implement a recursive function tribonacci to determine the Tribonacci numbers for various stages of the quest.
// Write a program to achieve her task.

// The Tribonacci series is a sequence of numbers defined as the sum of the three preceding terms. 0, 1, 1, 2, 4, 7, 13, and so on.

// Input format :
// The input consists of a positive integer n.

// Output format :
// The output displays the n terms in the Tribonacci series, separated by a space.

// Refer to the sample output for the formatting specifications.
// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// Sample test cases :
// Input 1 :
// 2
// Output 1 :
// 0 1
// Input 2 :
// 9
// Output 2 :
// 0 1 1 2 4 7 13 24 44
// Input 3 :
// 18
// Output 3 :
// 0 1 1 2 4 7 13 24 44 81 149 274 504 927 1705 3136 5768 10609



// You are using GCC
#include <stdio.h>

void tribonacci(int num){
    int first = 0, second = 1 , third = 1 , next = 0;
    for(int i=0;i<num;i++){
        printf("%d ",first);
        next = first + second + third ;
        first = second ;
        second = third;
        third = next;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    tribonacci(num);
}1