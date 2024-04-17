// Single File Programming Question

// Problem Statement




// Develop a program that allows for the management of student IDs in a National Cadet Corps (NCC) context. Initially, the program should be capable of inputting and storing the IDs of NCC students. Following this, the program should be able to accommodate the addition of IDs for three new members who join the NCC after the initial group. 




// The primary functionality of the program will be to input and store the IDs of the NCC students, append the IDs of the three new members at the end of the existing list, and finally, display the complete, updated list of all student IDs.

// Input format :

// The first line of input consists of an integer n, representing the number of NCC students.

// The second line of input consists of n space-separated integers ID[i], representing the NCC student IDs.

// The last line of input consists three integers M, N , and P, separated by a space, representing the IDs of Shahrukh's three friends.

// Output format :

// The output displays the updated list of IDs, a single line with n+3 space-separated integers after registering Shahrukh's friends following NCC students.




// Refer to the sample output for the format specifications.

// Code constraints :

// In this scenario, the test cases will fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ ID[i] ≤ 1000

// 1 ≤ M, N, P ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// 2 4 6 8 10
// 12 34 56
// Output 1 :
// 2 4 6 8 10 12 34 56 
// Input 2 :
// 10
// 7 4 3 1 76 657 756 657 453 1000
// 998 564 659
// Output 2 :
// 7 4 3 1 76 657 756 657 453 1000 998 564 659 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. Single File Programming Question

// Problem Statement




// Krish is developing a function to perform a specific array manipulation task. The goal is to remove an element from a given array of integers, 'arr', at a designated position 'p'. The position value 'p' is based on a 1-indexed system, meaning the first element is at position 1, the second at position 2, and so on.




// If the position is invalid, print "Invalid position!" Otherwise, print the modified array after removal.

// Input format :

// The first line of input consists of an integer n, representing the size of the array.

// The second line of input consists of n space-separated integers, representing the elements of the array.

// The third line of input consists of an integer p, representing the position to remove an element.

// Output format :

// If p is invalid, the output prints "Invalid position!"

// Otherwise, the output prints the array after removing the element at the specified position, separated by a space.




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In the scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ Each element ≤100

// 1 ≤ p ≤ n

// Sample test cases :
// Input 1 :
// 5
// 2 3 5 1 4
// 2
// Output 1 :
// 2 5 1 4 
// Input 2 :
// 10
// 10 20 40 30 50 70 60 80 90 100
// 12
// Output 2 :
// Invalid position!
// Input 3 :
// 2
// 4 5 
// 1
// Output 3 :
// 5 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. 

#include <stdio.h>

int main() {
    // Input variables
    int n, arr[10], p, i;

    // Input: size of the array
    scanf("%d", &n);

    // Input: elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: position to remove an element
    scanf("%d", &p);

    // Check if position is valid
    if (p < 1 || p > n) {
        // Output: Invalid position
        printf("Invalid position!\n");
    } else {
        // Output: array after removing the element at specified position
        for (i = 0; i < n; i++) {
            if (i != p - 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}// You are using GCC
