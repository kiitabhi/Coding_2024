#include <stdio.h>

int fact(int n) {
    int i, f=1;
    for(i=n;i>=1;i--)
        f *= i;
    return f;
}

void main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, fact(n));
}