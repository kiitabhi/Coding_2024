#include <math.h>
#include <stdio.h>

int main() {
    int ch;
    float a, b, c, d, r1, r2;
    do {
        printf("Enter the values of a, b and c : ");
        scanf("%f %f %f", &a, &b, &c);
        d = (pow(b, 2)) - (4 * a * c);
        if (a == 0 && b == 0) {
            printf("No solution\n");
        }
        else if (d == 0) {
            r1 = (-b) / (2 * a);
            printf("Only one real root : %f\n", r1);
        }
        else if (d < 0) {
            printf("Roots are imaginary\n");
        }
        else {
            r1 = ((-b) + sqrt(d)) / (2 * a);
            r2 = ((-b) - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct. The roots are : %f and %f\n", r1, r2);
        }
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    } while (ch != 1);
    return 0;
}