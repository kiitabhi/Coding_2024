#include <stdio.h>

int sum_digit(int n) {
    int r, sum=0;
    while(n!=0) {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of the digits of %d = %d\n", n, sum_digit(n));
}