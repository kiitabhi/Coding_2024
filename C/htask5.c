#include <stdio.h>

int main() {
    int a, b, c;
    printf("Welcome to Calculator v1.0\n");
    printf("=============================\n");

    while (c != 5) {
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice -> ");
        scanf("%d", &c);

        switch (c) {
            case 1 :
                printf("Enter two numbers to add -> ");
                scanf("%d %d", &a, &b);
                printf("Sum of %d and %d is = %d\n", a, b, (a + b));
                break;

            case 2 :
                printf("Enter two numbers to subtract -> ");
                scanf("%d %d", &a, &b);
                printf("Difference of %d and %d is = %d\n", a, b, (a - b));
                break;
            
            case 3 :
                printf("Enter two numbers to multiply -> ");
                scanf("%d %d", &a, &b);
                printf("Product of %d and %d is = %d\n", a, b, (a * b));
                break;

            case 4 :
                printf("Enter two numbers to divide -> ");
                scanf("%d %d", &a, &b);
                printf("Quotient of %d and %d is = %d\n", a, b, (a / b));
                break;
            
            case 5 :
                break;
            
            default :
                printf("Wrong Choice!!!\n");
                break;
        }
    }
    
    printf("Thank you...\n");
    printf("Greetings from Abhishek Dutta\n");
    return 0;
}