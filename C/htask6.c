#include <stdio.h>

void main() {
    int s, e;
    printf("Enter starting and ending range : ");
    scanf("%d %d", &s, &e);
    printf("Odd numbers within range %d and %d : ", e, s);
    for (int i = e; i>= s; i--)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\nEven numbers within range %d and %d : ", s, e);
    for (int i = s; i <= e; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}