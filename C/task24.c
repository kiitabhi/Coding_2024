#include <stdio.h>
#include <math.h>

void main() {
    int x, n;
    float f=1, r;
    printf("Enter the value of x and n : ");
    scanf("%d %d", &x, &n);
    for(int i=n;i>=1;i--) {
        f=f*i;
    }
    r = pow(x, n)/f;
    printf("%d to the power %d divided by %d! = %f\n", x, n, n, r);
}