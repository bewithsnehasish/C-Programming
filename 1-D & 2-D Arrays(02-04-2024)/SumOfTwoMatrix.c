//WAP to solve the sum of two matrix and store it in a new matrix

#include <stdio.h>

#define MAX_SIZE 10

// Function to add two matrices and store the result in a new matrix
void addMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    
    // Input dimensions of the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);
    
    // Input elements of first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Add matrices and store the result
    addMatrices(mat1, mat2, result, rows, cols);
    
    // Print the result
    printf("Resultant matrix after addition:\n");
    printMatrix(result, rows, cols);
    
    return 0;
}

