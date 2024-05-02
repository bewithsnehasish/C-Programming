// Problem Statement


// Rema is working on a text processing tool to remove duplicate characters from a given string.


// Write a program that takes a string as input and removes any duplicate characters including spaces, leaving unique characters in the modified string.


// Implement a function removeDuplicates to achieve this using character arithmetic.
// Input format :

// The input consists of a string, s that contains lowercase and uppercase letters with spaces.
// Output format :

// The output prints the string s after removing the duplicate characters.


// Refer to the sample output for the formatting specifications.
// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ Length of the string ≤ 50

// Input characters are case-sensitive.
// Sample test cases :
// Input 1 :

// Hello World

// Output 1 :

// Helo Wrd

// Input 2 :

// Enjoy Moments

// Output 2 :

// Enjoy Mmets

// Input 3 :

// Do not let yesterday take up too much of today.

// Output 3 :

// Do ntleysrdakupmchf.


#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

char removeDuplicates(char s[]) {
    int hash[128] = {0}; // Create a hash table to store unique characters
    int len = strlen(s);
    char modified_string[MAX_LEN + 1]; // Create a string to store the modified string
    int j = 0; // Index for the modified string

    // Iterate through each character in the input string
    for (int i = 0; i < len; i++) {
        char c = s[i];

        // If the character is not already present in the hash table
        if (hash[c] == 0) {
            hash[c] = 1; // Mark the character as seen
            modified_string[j++] = c; // Add the character to the modified string
        }
    }

    modified_string[j] = '\0'; // Terminate the modified string with a null character
    strcpy(s, modified_string); // Copy the modified string back to the original string
}

int main() {
    char s[MAX_LEN + 1];

    printf("Enter a string: ");
    fgets(s, MAX_LEN + 1, stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove the newline character from the input

    printf("Original string: %s\n", s);
    removeDuplicates(s);
    printf("Modified string: %s\n", s);

    return 0;
}

