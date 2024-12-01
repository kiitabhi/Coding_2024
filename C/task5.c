#include <stdio.h>

void main() {
    int f, c;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%d", &f);
    c = (f - 32) * 5 / 9;
    printf("The given temperature in Centigrade -> %d\n", c);
}