// WAP to print the multiplication of two matrix and store it in a new matrix and print it

#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        printf("Cannot multiply matrices: Invalid dimensions\n");
        return;
    }
    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

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
    int row1, col1, row2, col2;
    
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);
    
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);
    
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Multiply matrices and store the result
    multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2);
    
    // Print the result
    printf("Resultant matrix after multiplication:\n");
    printMatrix(result, row1, col2);
    
    return 0;
}
