#include <stdio.h>

void SWAP(int a, int b) {
    printf("Before swapping the two numbers are: n1 = %d and n2 = %d\n", a, b);
    int c=a;
    a=b;
    b=c;
    printf("After swapping the two numbers are: n1 = %d and n2 = %d\n", a, b);
}

void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    SWAP(a, b);
}