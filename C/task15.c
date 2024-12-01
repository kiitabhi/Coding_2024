#include <stdio.h>

void main() {
    int y, ch;
    do {
        printf("Enter the year to check : ");
        scanf("%d", &y);
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                printf("%d is a leap year\n", y);
            }
            else {
                printf("%d is not a leap year\n", y);
            }
        }
        else if (y % 4 == 0) {
            printf("%d is a leap year\n", y);
        }
        else {
            printf("%d is not a leap year\n", y);
        }
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    }while (ch != 1);
}