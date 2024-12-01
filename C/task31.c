#include <stdio.h>

void main() {
    int i, j, n;
    char c='A';
    printf("Enter the range : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(j=i;j>0;j--) {
            printf("%c ", (c+j-1));
        }
        printf("\n");
    }
}