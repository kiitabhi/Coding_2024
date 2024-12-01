#include <stdio.h>

void main() {
    int a, b, c;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: number 1 = %d, number 2 = %d\n", a, b);
    c = a, a = b, b = c;
    printf("After swapping: number 1 = %d, number 2 = %d\n", a, b);
}