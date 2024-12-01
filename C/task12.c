#include <stdio.h>

void main() {
    float p, c, m, total;
    printf("Enter the marks obtained in Physics, Chemistry and Mathematics : ");
    scanf("%f %f %f", &p, &c, &m);
    total = p + c + m;
    if (m >= 65.0 && p >= 55.0 && c >= 50.0 && total >= 190.0 || (p + m) >= 140.0) {
        printf("The candidate is eligible for admission\n");
    }
    else {
        printf("The candidate is not eligible for admission\n");
    }
}