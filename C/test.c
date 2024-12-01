#include <stdio.h>

void main() {
    int a, k, c, a1, k1, c1, n;
    do{
        printf("Enter number of ADULTS, KIDS AND CAMERA: ");
        scanf("%d %d %d", &a, &k, &c);
        a1 += a;
        k1 += k;
        c1 += c;
        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%d", &n);
    }while(n != 0);
    printf("Adults: %d\nKids: %d\nCamera: %d\n", a1, k1, c1);
    float total = (a1 * 60) + (k1 * 20) + (c1 * 100);
    printf("Total collection: %f\n", total);
}