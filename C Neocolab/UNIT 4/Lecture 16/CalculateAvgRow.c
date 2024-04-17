// Single File Programming Question
// Problem statement

// Aryan is solving a puzzle to determine if a n x n matrix is a magic square. He needs to input a matrix and the code checks if the sum of each row, column, and diagonals is the same.

// Aryan's task is to create a function that takes an n x n matrix as an input and returns whether the matrix is a magic square or not.


// Magic Square Conditions:

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
// Extra spaces and new line characters in the program output will result in the failure of the test case. Single File Programming Question

// Problem statement




// Raj is working on a data analysis project and needs help creating a program that processes a 2D array. This program includes functions to calculate the average value of each row in a 2D array. The program should consist of several functions:




// calculateRowAverage(cols, row): Calculates the average of a single row in a 2D array.
// calculateAverages(rows, cols, arr, averages): Computes and stores the averages for each row in the 2D array.
// displayAverages(rows, averages): Displays the row number and its average value.
// Input format :

// The first line of input consists of two integers, rows and cols, representing the dimensions of the 2D array.

// The second line of input consists of the elements arr[i] of the 2D array, where each element is a double.

// Output format :

// The output displays the average value of each row as a double datatype value, rounded off two decimal points in the specified format:

// Average of each row:

// Row 1: [row1_avg]

// Row 2: [row2_avg]

// Row 3: [row3_avg]




// Refer to the sample output for the formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ rows and cols ≤ 5

// 1.0 ≤ arr[i] ≤ 5.0

// Max_Rows and Cols = 100

// Sample test cases :
// Input 1 :
// 3 3
// 1.7 2.9 3.5
// 4.2 5.7 6.8
// 7.2 8.1 9.6
// Output 1 :
// Average of each row:
// Row 1: 2.70
// Row 2: 5.57
// Row 3: 8.30

// Input 2 :
// 2 2
// 6.8 1.2
// 5.6 8.9
// Output 2 :
// Average of each row:
// Row 1: 4.00
// Row 2: 7.25

// Input 3 :
// 5 5
// 2.2 3.8 4.3 5.8 9.2
// 6.7 7.1 8.8 9.2 10.7
// 11.7 12.8 13.7 14.3 15.3
// 16.2 17.4 18.2 19.2 20.1
// 21.3 22.7 23.4 24.3 25.7
// Output 3 :
// Average of each row:
// Row 1: 5.06
// Row 2: 8.50
// Row 3: 13.56
// Row 4: 18.22
// Row 5: 23.48

// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case. 


#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

// Function to calculate the average of a single row in a 2D array
double calculateRowAverage(int cols, double row[]) {
    double sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += row[i];
    }
    return sum / cols;
}

// Function to compute and store the averages for each row in the 2D array
void calculateAverages(int rows, int cols, double **arr, double averages[]) {
    for (int i = 0; i < rows; i++) {
        averages[i] = calculateRowAverage(cols, arr[i]);
    }
}

// Function to displaythe row number and its average value
void displayAverages(int rows, double averages[]) {
    printf("Average of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %.2lf\n", i + 1, averages[i]);
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    // Dynamic memory allocation for the 2D array
    double **arr = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (double *)malloc(cols * sizeof(double));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }

    double averages[100]; // Assuming maximum rows is 100

    calculateAverages(rows, cols, arr, averages);
    displayAverages(rows, averages);

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}