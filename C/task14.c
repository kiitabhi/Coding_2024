#include <stdio.h>

void main() {
    float a, b, c;
    int ch;
    do {
        printf("Enter three sides of a triangle : ");
        scanf("%f %f %f", &a, &b, &c);
        if ((a+b)>c && (b+c)>a && (c+a)>b) {
            if (a == b && b == c && c == a) {
                printf("This is an equilateral triangle\n");
            }
            else if (a == b || b == c || c == a) {
                printf("This is an isosceles triangle\n");
            }
            else if (a*a + b*b == c*c) {
                printf("This is a right-angle triangle\n");
            }
            else {
                printf("This is a scalene triangle\n");
            }
        }
        else {
            printf("Triangle not possible\n");
        }
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    }while (ch != 1);
}