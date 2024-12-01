#include <stdio.h>

void main() {
    int a, b, ch, result;
    char c;
    do {
        printf("Enter two numbers : ");
        scanf("%d %d", &a, &b);
        printf("Enter the operator : ");
        scanf(" %c", &c);
        switch (c) {
            case '+' :
                result = a+b;
                printf("Sum of %d and %d is : %d\n", a, b, result);
                break;
            case '-' :
                result = a-b;
                printf("Difference of %d and %d is : %d\n", a, b, result);
                break;
            case '*' :
                result = a*b;
                printf("Product of %d and %d is : %d\n", a, b, result);
                break;
            case '/' :
                result = a/b;
                printf("Quotient of %d and %d is : %d\n", a, b, result);
                break;
            case '%' :
                result = a%b;
                printf("Remainder of %d and %d is : %d\n", a, b, result);
                break;
            default :
                printf("Wrong choice !!!\n");
                break;
        }
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    }while (ch != 1);
}