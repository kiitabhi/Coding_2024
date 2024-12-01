#include <stdio.h>

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int term = 0;
    printf("Series: ");
    while (term <= n) {
        printf("%d", term);
        term = (term + 1) * 2 - 1;
        if (term <= n) {
            printf(", "); 
        }
    }
    printf("\n");
}