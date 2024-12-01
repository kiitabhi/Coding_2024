#include <stdio.h>

void main(){
    int i, j, r, c, a[r][c];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter values into the matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    }
    printf("Matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    int *ptr=a;
    for(i=0;i<c;i++) {
        for(j=0;j<r;j++)
            printf("%d ", *(ptr+j*c+i));
        printf("\n");
    }
}