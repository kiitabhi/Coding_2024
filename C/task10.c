#include <stdio.h>

void main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is an EVEN number\n", n);
    }
    else {
        printf("%d is an ODD number\n", n);
    }
}