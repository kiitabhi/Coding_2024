#include <stdio.h>

void transposeMatrix(int (*matrix)[10], int rows, int cols) {
    int transposed[10][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows of matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of matrix: ");
    scanf("%d", &cols);
    int matrix[10][10];
    printf("Enter the elements of the matrix (row major order): ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Given Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given Matrix:\n");
    transposeMatrix(matrix, rows, cols);
    return 0;
}