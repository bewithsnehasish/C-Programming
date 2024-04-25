// Single File Programming Question

// Problem Statement




// Aman is assigned a program that takes a generic pointer (void *) to handle different data types. You have to guide him in completing the program.




// The program prompts the user to input a data type identifier ('i' for integer, 'f' for float) and a corresponding value. Using a switch statement, print the entered value with the appropriate data type label.  Any other input except ('i' and 'f') is given, print "Invalid type entered!" 

// Input format :

// The first line of input consists of a character, representing a data type (i for integer or f for float).

// If the character is i, the second line consists of an integer value.

// If the character is f, the second line consists of a floating-point value.

// Output format :

// If the character is i, print "Integer: " followed by the integer value.

// If the character is f, print "Float: " followed by the float value, rounded off to two decimal places.

// If any other character is entered, print "Invalid type entered!"




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ integer ≤ 150

// 1.0 ≤ float ≤ 150.0

// Sample test cases :
// Input 1 :
// i
// 4
// Output 1 :
// Integer: 4

// Input 2 :
// f
// 5.5
// Output 2 :
// Float: 5.50

// Input 3 :
// p
// 50
// Output 3 :
// Invalid type entered!

// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <stdio.h>

void print(int *integer);
void flt(int *flt);


int main(){
    int integer;
    float flt;
    char check;
    scanf("%c",&check);
    if(check == 'i'){
        scanf("%d",&integer);
        printf("Integer: %d",integer);
    }
    else if(check == 'f'){
        scanf("%f",&flt);
        printf("Float: %.2f",flt);
    }
    else printf("Invalid type entered!");
}