#include <stdio.h>

void main() {
    int a, b, lcm, hcf;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    int min=a;
    if (b<min)
        min=b;
    for(int i=1;i<=min;i++) {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    printf("LCM of %d and %d is %d\n", a, b, lcm);
}