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
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <stdio.h>

int main() {
    // Input variables
    int n, IDs[10], M, N, P, i;

    // Input: number of NCC students
    scanf("%d", &n);

    // Input: NCC student IDs
    for (i = 0; i < n; i++) {
        scanf("%d", &IDs[i]);
    }

    // Input: IDs of Shahrukh's three friends
    scanf("%d %d %d", &M, &N, &P);

    // Output: updated list of IDs
    for (i = 0; i < n; i++) {
        printf("%d ", IDs[i]);
    }
    printf("%d %d %d\n", M, N, P);

    return 0;
}// You are using GCC
