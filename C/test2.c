// WAP to swap 3 numbers in cyclic order using call by reference
// a = 20, b = 30, c = 40 -> a = 40, b = 20, c = 30

#include <stdio.h>

void main() {
    int a, b, c, *x=&a, *y=&b, *z=&c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nBefore swapping : \n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
    printf("\nAfter swapping : \n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}