#include <stdio.h>

void isPrime(int n) {
    int i, c=0;
    for(i=2;i<n;i++) {
        if(n%i==0)
            c++;
    }
    if(c==0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==1)
        printf("1 is neither prime nor composite\n");
    else{
        isPrime(n);
    }
}