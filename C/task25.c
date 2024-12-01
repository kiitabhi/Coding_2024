#include <stdio.h>

void main() {
    int n, c=0, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n == 1) 
        printf("1 is neither prime nor composite\n");
    else {
        for(i=2;i<n;i++) {
            if(n%i==0)
                c++;
        }
        if (c==0)
            printf("%d is a prime number\n", n);
        else
            printf("%d is a not prime number\n", n);
    }
}