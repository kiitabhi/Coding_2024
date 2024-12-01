#include <stdio.h>

void main() {
    int n, ch;
    do {
        printf("Enter a number : ");
        scanf("%d", &n);
        int f=0;
        for (int i = 1; i <= n; i++) {
            if ((i * i) == n) {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("%d is a perfect square\n", n);
        else
            printf("%d is not a perfect square\n", n);
        printf("Enter 0 to continue and 1 to stop : ");
        scanf("%d", &ch);
    } while (ch != 1);
}