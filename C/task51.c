#include <stdio.h>

void main() {
    int i, j, r, c, sum;
    printf("Enter number of rows and columns in the matrix : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("Enter element in row %d and column %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        sum = 0;
        for(j=0;j<c;j++) {
            sum += a[i][j];
        }
        printf("Sum of elements in row %d : %d\n", i, sum);
    }
    for(i=0;i<c;i++) {
        sum = 0;
        for(j=0;j<r;j++) {
            sum += a[j][i];
        }
        printf("Sum of elements in column %d : %d\n", i, sum);
    }
}