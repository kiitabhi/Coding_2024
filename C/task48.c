#include <stdio.h>

void main() {
    // accepting the row and column size of the matrices

    int i, j, r1, r2, c1, c2, c;
    printf("Enter row and column size of matrix 1 : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and column size of matrix 2 : ");
    scanf("%d %d", &r2, &c2);
    
    int a1[r1][c1], a2[r2][c2], r[r1][c2];
    // entering vlues into the matrices

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("Enter value in row %d and column %d of matrix 1 : ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("Enter value in row %d and column %d of matrix 2 : ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }
    // printing the matrices

    printf("Matrix 1:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }
    // multiplying the matrices
    
    printf("Product of matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            c = 0, r[i][j] = 0;
            while(c < r2) {
                r[i][j] += a1[i][c] * a2[c][j];
                c++;
            }
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
}