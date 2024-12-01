#include <stdio.h>

void main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Value of a = %d and b = %d before swapping\n", a, b);
    a += b;
    b = a - b;
    a = a - b;
    printf("Value of a = %d and b = %d after swapping\n", a, b);
}