// sum of two numbers

#include <stdio.h> 
#include <stdbool.h>

int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

void main() {
    int a, b, n;
    while (true) {
        printf("Enter two numbers : ");
        scanf("%d %d", &a, &b);
        printf("Sum of %d and %d is = %d\n", a, b, sum(a, b));
        printf("Enter 0 to continue and 1 to exit : ");
        scanf("%d", &n);
        if (n == 1) {
            break;
        }
    }
}