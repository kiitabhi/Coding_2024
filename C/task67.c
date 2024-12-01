#include <stdio.h>

void printPrimeFactors(int n, int divisor) {
    if (n <= 1) {
        return;
    }
    if (n % divisor == 0) {
        printf("%d ", divisor);
        printPrimeFactors(n / divisor, divisor);
    } else {
        printPrimeFactors(n, divisor + 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    printPrimeFactors(num, 2);
    printf("\n");
    return 0;
}