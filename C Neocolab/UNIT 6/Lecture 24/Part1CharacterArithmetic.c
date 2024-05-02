// Problem Statement


// Imagine Fiona is managing a customer feedback system for a large online platform. Users submit feedback through a form, and Fiona receives a string containing various characters, including feedback text.


// Fiona wants to quickly identify the first unique character in the feedback string to address specific issues raised by users. Write a program using character arithmetic to help Fiona pinpoint and display the first non-repeating character in the feedback string.
// Input format :

// The input consists of the string, representing the feedback submitted by the customer.
// Output format :

// If there is a non-repeating character present in the input string, the output displays "The first non-repeating character is: " followed by that character.

// If there is no non-repeating character present in the input string, the output displays "No non-repeating character found in the string"


// Refer to the sample output for the formatting specifications.
// Code constraints :

// In this scenario, the test cases fall under the following constraints

// 1 ≤ Length of String ≤ 100

// Input characters are case-sensitive.
// Sample test cases :
// Input 1 :

// Great service! Quick response and helpful assistance

// Output 1 :

// The first non-repeating character is: G

// Input 2 :

// aaabbbcccssdd

// Output 2 :

// No non-repeating character found in the string

// Input 3 :

// The website layout is user-friendly and easy to navigate

// Output 3 :

// The first non-repeating character is: T





#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int firstNonRepeatingChar(char *str) {
    int charCount[256] = {0}; // Initialize an array to store character frequencies

    // Count the frequency of each character
    for (int i = 0; str[i]; i++) {
        charCount[str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i]; i++) {
        if (charCount[str[i]] == 1) {
            return str[i];
        }
    }

    return -1; // No non-repeating character found
}

int main() {
    char feedback[MAX_LENGTH];
    printf("Enter the feedback string: ");
    fgets(feedback, MAX_LENGTH, stdin);

    int firstNonRepeating = firstNonRepeatingChar(feedback);

    if (firstNonRepeating == -1) {
        printf("No non-repeating character found in the string\n");
    } else {
        printf("The first non-repeating character is: %c\n", firstNonRepeating);
    }

    return 0;
}
1