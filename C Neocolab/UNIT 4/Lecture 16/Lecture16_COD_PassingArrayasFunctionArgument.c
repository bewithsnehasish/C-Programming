// Single File Programming Question

// Problem statement

// Aryan is solving a puzzle to determine if a n x n matrix is a magic square. He needs to input a matrix and the code checks if the sum of each row, column, and diagonals is the same.

// Aryan's task is to create a function that takes an n x n matrix as an input and returns whether the matrix is a magic square or not.


// For a n x n matrix to be a magic square, the sums of main and secondary diagonals, rows, and columns must be equal. If met, the matrix is magical; otherwise, it's not.


// Functions Specifications:

// rowSum(matrix, row): Calculates the sum of a given row in the matrix.
// colSum(matrix, col): Calculates the sum of a given column in the matrix.
// mainDiagonalSum(matrix): Calculates the sum of the main diagonal.
// secondaryDiagonalSum(matrix): Calculates the sum of the secondary diagonal.
// isMagicSquare(matrix): Checks if the matrix is a magic square.
// Input format :

// The first line of input consists of an integer value n, representing the size of the square matrix.

// The next line input consists of a n x n matrix, where each element is an integer separated by space.

// Output format :

// If the given matrix is a magic square, output "The given matrix is a magic square."

// If the given matrix is not a magic square, output "The given matrix is not a magic square."

// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 2 ≤ n ≤ 5
// 1 ≤ elements ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 8  1  6
// 3  5  7
// 4  9  2

// Output 1 :
// The given matrix is a magic square
// Input 2 :
// 4
// 5 6 19 68
// 69 18 3 8
// 4 7 70 17
// 20 67 6 5

// Output 2 :
// The given matrix is a magic square
// Input 3 :
// 5
// 23 28 21 26 12
// 22 24 20 25 36
// 27 20 25 29 45
// 30 26 23 28 42
// 11 25 36 51 78
// Output 3 :
// The given matrix is not a magic square
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <stdio.h>

// Function to calculate the sum of a given row in the matrix
int rowSum(int matrix[][5], int n, int row) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += matrix[row][j];
    }
    return sum;
}

// Function to calculate the sum of a given column in the matrix
int colSum(int matrix[][5], int n, int col) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][col];
    }
    return sum;
}

// Function to calculate the sum of the main diagonal
int mainDiagonalSum(int matrix[][5], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Function to calculate the sum of the secondary diagonal
int secondaryDiagonalSum(int matrix[][5], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
    }
    return sum;
}

// Function tocheck if the matrix is a magic square
int isMagicSquare(int matrix[][5], int n) {
    int main_diag_sum = mainDiagonalSum(matrix, n);
    int secondary_diag_sum = secondaryDiagonalSum(matrix, n);

    // Check if the main and secondary diagonal sums are equal
    if (main_diag_sum != secondary_diag_sum) {
        return 0;
    }

    // Check if the sums of all rows and columns are equal to the main diagonal sum
    for (int i = 0; i < n; i++) {
        if (rowSum(matrix, n, i) != main_diag_sum || colSum(matrix, n, i) != main_diag_sum) {
            return 0;
        }
    }

    // If all conditions are met, the matrix is a magic square
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[5][5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isMagicSquare(matrix, n)) {
        printf("The given matrix is a magic square\n");
    } else {
        printf("The given matrix is not a magic square\n");
    }

    return 0;
}// You are using GCC
