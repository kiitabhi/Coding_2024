#include <stdio.h>

void main() {
    int a, b, c, max;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max ) {
        if (c > b) {
            max = c;
        }
        else {
            max = b;
        }
    }
    printf("The largest number is %d\n", max);
}