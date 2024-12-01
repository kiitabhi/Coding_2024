#include <stdio.h>

int main() {
    int a, b;
    int n = 0;
    printf("Welcome to Calculator v1.0\n");
    printf("=============================\n");

    while (n != 5) {
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice -> ");
        scanf("%d", &n);

        if (n == 1) {
            printf("Enter two numbers to add -> ");
            scanf("%d %d", &a, &b);
            printf("Sum of %d and %d is = %d\n", a, b, (a + b));
        }

        else if (n == 2) {
            printf("Enter two numbers to subtract -> ");
            scanf("%d %d", &a, &b);
            printf("Difference of %d and %d is = %d\n", a, b, (a - b));
        }
        
        else if (n == 3) {
            printf("Enter two numbers to multiply -> ");
            scanf("%d %d", &a, &b);
            printf("Product of %d and %d is = %d\n", a, b, (a * b));
        }

        else if (n == 4) {
            printf("Enter two numbers to divide -> ");
            scanf("%d %d", &a, &b);
            printf("Quotient of %d and %d is = %d\n", a, b, (a / b));
        }

        else if {
            printf("Enter the number and its exponent -> ");
            
        }

        else if (n > 5) {
            printf("Wrong Choice!!!\n");
        }
    }
    
    printf("Thank you...\n");
    printf("Greetings from Abhishek Dutta\n");
    return 0;
}
