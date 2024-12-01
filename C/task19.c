#include <stdio.h>

void main() {
    int i, j;
    printf("Enter the starting and ending range : ");
    scanf("%d %d", &i, &j);
    for(int a=i;a<=j;a++) {
        if (a % 2 == 0) {
            printf("%d ", a);
        }
    }
    printf("\n");
}