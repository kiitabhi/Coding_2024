#include <stdio.h>

void main() {
    int i, j, n, a=1;
    printf("Enter the range : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            if(a%2!=0)
                printf("%d", 1);
            else
                printf("%d", 0);
            a++;
        }
        printf("\n");
    }
}