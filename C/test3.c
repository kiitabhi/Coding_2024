// multiply two numbers using pointers

#include <stdio.h>

void main(){
    int a, b, *p=&a, *q=&b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product of the two numbers: %d\n", (*p)*(*q));
}