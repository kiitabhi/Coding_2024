#include <stdio.h>

void main() {
    int w, ch;
    do {
        printf("Enter the week day number (0 - 6) : ");
        scanf("%d", &w);
        switch (w) {
            case 0:
                printf("This is Sunday\n");
                break;
            case 1:
                printf("This is Monday\n");
                break;
            case 2:
                printf("This is Tuesday\n");
                break;
            case 3:
                printf("This is Wednesday\n");
                break;
            case 4:
                printf("This is Thursday\n");
                break;
            case 5:
                printf("This is Friday\n");
                break;
            case 6:
                printf("This is Saturday\n");
                break;
            default:
                printf("Wrong choice !!!\n");
                break;
        }
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    } while (ch != 1);
}