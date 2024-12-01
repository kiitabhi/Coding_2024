#include <stdio.h>

void main() {
    int i, j, r, c;
    printf("Enter the row and column size of matrix : ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter value in row %d and column %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}