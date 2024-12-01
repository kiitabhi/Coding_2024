// here we can perform palindrome, angstrom, fibonacci

#include <stdio.h>

int n;

int palin(n) {
    int r;
    int sum = 0; 
    int num = n;

    while (n != 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (sum == num) {
        return 1;
    }
}

int arms(n) {
    int r;
    int sum = 0;
    int num = n;

    while (n != 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (sum == num) {
        return 1;
    }
}

void main() {
    int c;
    printf("1. Palindrome\n2. Armstrong\nEnter your choice : ");
    scanf("%d", &c);

    switch (c) {
        case 1 :
            printf("Enter a number to check : ");
            scanf("%d", &n);
            if (palin(n) == 1) {
                printf("%d is palindrome", n);
            }
            else {
                printf("%d is not palindrome", n);
            }

            break;
        case 2 :
            printf("Enter a number to check : ");
            scanf("%d", &n);
            if (arms(n) == 1) {
                printf("%d is armstrong", n);
            }
            else {
                printf("%d is not armstrong", n);
            }

            break;
        default :
            printf("Wrong choice !!!");
    }
}