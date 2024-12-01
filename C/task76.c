#include <stdio.h>

void multiply(int *a, int *b, int *result) {
    *result = (*a) * (*b);
}

int main() {
    int num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    multiply(&num1, &num2, &product);
    printf("Product of %d and %d = %d\n", num1, num2, product);
    return 0;
}