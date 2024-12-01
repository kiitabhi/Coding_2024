#include <stdio.h>

void main() {
    int n,s=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=n;i>=1;i--) {
        s=s*i;
    }
    printf("Factorial of %d = %d\n", n, s);
}