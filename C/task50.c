#include <stdio.h>

void main() {
    int i, j, r, c, sum = 0;
    printf("Enter the row and column size of the matrix : ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Enter row and column size of square matrix...\n");
    }
    else {
        int a[r][c];

        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                printf("Enter value in row %d and column %d : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Matrix:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(i<=j)
                    sum += a[i][j];
            }
        }

        printf("Sum of elements of upper triangular matrix = %d\n", sum);
    }
}