#include <stdio.h>

void main() {
    int i, j, r, c, sum = 0;
    printf("Enter row and column size of matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++){
            printf("Enter value in row %d and column %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++){
            sum += a[i][j];
        }
    }
    printf("Sum of the elements in array = %d\n", sum);
}