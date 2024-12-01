#include <stdio.h>

void change(int* a) {
    *a=6;
}

void main() {
    int a=1;
    printf("Value of a = %d\n", a);
    change(&a);
    printf("Value of a = %d\n", a);
}