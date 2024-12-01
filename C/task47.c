#include <stdio.h>

void main() {
    int i, j, r1, c1, r2, c2;
    printf("Enter row and column size of matrix 1 : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and column size of matrix 2 : ");
    scanf("%d %d", &r2, &c2);
    int a1[r1][c1], a2[r2][c2];
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++){
            printf("Enter value in row %d and column %d of matrix 1 : ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++){
            printf("Enter value in row %d and column %d of matrix 2 : ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }
    printf("Matrix 1: \n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++){
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2: \n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++){
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of matrix 1 and matrix 2: \n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++){
            printf("%d ", a1[i][j] + a2[i][j]);
        }
        printf("\n");
    }
}