#include <stdio.h>
#define pi 3.14

void main() {
    float r, a;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    a = pi * (r * r);
    printf("The area is = %f\n", a);
}