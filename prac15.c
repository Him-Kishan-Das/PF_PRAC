#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to multiply two matrices
void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = 0;

            for (int k = 0; k < COLS; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to input values for a matrix
void inputMatrix(int mat[ROWS][COLS]) {
    printf("Enter the values for the matrix (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int resultMatrix[ROWS][COLS];

    // Input values for matrices
    inputMatrix(matrix1);
    inputMatrix(matrix2);

    // Call the function to multiply matrices
    multiplyMatrices(matrix1, matrix2, resultMatrix);

    // Display the matrices
    printf("\nMatrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nResultant Matrix:\n");
    printMatrix(resultMatrix);

    return 0;
}
