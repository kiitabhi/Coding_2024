#include <stdio.h>

void main() {
    int n, r, num;
    int s=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    while (n > 0) {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("Sum of the digits of %d = %d\n", num, s);
}