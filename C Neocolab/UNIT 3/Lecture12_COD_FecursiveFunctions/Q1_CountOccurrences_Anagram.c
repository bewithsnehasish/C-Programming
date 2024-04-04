// Heather is fascinated by anagram numbers, where one number can be rearranged to form another by rearranging its digits. She wants to determine if two given numbers are anagrams using the following functions:

// countOccurrences recursive function - Counts the occurrences of a digit in a given number.
// areAnagrams function - Checks if two numbers are anagrams by comparing the counts of each digit.

// Heather needs your help to verify if the entered numbers are anagrams or not.

// Input format :
// The input consists of two space-separated integers m and n, representing the input numbers.

// Output format :
// If m and n are anagrams, the output prints "m and n are anagrams." where m and n are input numbers.

// Otherwise, the output prints "m and n are not anagrams." where m and n are input numbers.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// 100 < m, n < 106

// Sample test cases :
// Input 1 :
// 123 321
// Output 1 :
// 123 and 321 are anagrams.
// Input 2 :
// 987456 912447
// Output 2 :
// 987456 and 912447 are not anagrams.
// Input 3 :
// 9899 8999
// Output 3 :
// 9899 and 8999 are anagrams.

// You are using GCC
#include <stdio.h>

int countOccurrences(int num,int digit){
    if (num == 0) return 0;
    else if(num%10 == digit)return (num%10==digit) + countOccurrences(num / 10,digit);
    return countOccurrences(num/10,digit);
}

int areAnagrams(int num1,int num2){
    for(int i = 0; i<10; i++){
        int countM = countOccurrences(num1,i);
        int countN = countOccurrences(num2,i);
        if(countM!=countN){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if(areAnagrams(m,n))printf("%d and %d are anagrams.",m,n);
    else printf("%d and %d are not anagrams.",m,n);
}