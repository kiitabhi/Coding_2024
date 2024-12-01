#include <stdio.h>

void main() {
    float h, b, a;
    printf("Enter the height and base of the triangle : ");
    scanf("%f %f", &b, &h);
    a = 0.5 * b * h;
    printf("The area of the triangle : %f\n", a);
}