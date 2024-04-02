// Single File Programming Question
// Problem Statement



// George, a secret agent, needs a program to encrypt a character using a shifting method. The program should prompt him to enter an alphabet and a shift amount as register storage class inputs.



// The encrypted character is obtained by shifting the input alphabet by the specified amount in a circular manner. Uppercase and lowercase letters wrap around, ensuring a seamless shift within the alphabet.



// Example: If the character 'y' wants to be rotated 6 times, it wraps around the alphabet after reaching 'z'. The shifting process results in the output 'e'.

// Input format :
// The input consists of a character c representing the alphabet on which shifting happens and an integer n representing the number of times it has to be shifted, separated by a space.

// Output format :
// The output prints the character after shifting the input alphabet (to its right) n times.

// If c is not an alphabet, the output prints the input character as such without shifting.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In the given scenario, the test cases fall under the following constraints:

// c should be a valid ASCII character.

// 1 ≤ n ≤ 20

// Sample test cases :
// Input 1 :
// A 1
// Output 1 :
// B
// Input 2 :
// Z 2
// Output 2 :
// B
// Input 3 :
// c 4
// Output 3 :
// g
// Input 4 :
// y 6
// Output 4 :
// e
// Input 5 :

// 5
// Output 5 :

// Input 6 :
// b 20
// Output 6 :
// v

// You are using GCC
#include <stdio.h>

char encryptCharacter(register char c, register int shift){
    if((c>='a' && c <= 'z') || (c>='A' && c<='Z')){
        register char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
        return (c-base+shift) % 26 + base;
    }else{
        return c;
    }
}

int main(){
    register char c;
    register int shift;
    scanf(" %c %d", &c,&shift);
    char encryptedChar = encryptCharacter(c,shift);
    printf("%c",encryptedChar);
}