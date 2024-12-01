// to find the greatest of three numbers

#include <stdio.h>

int main() {
    int a, b, c, i;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    int array[] = {a, b, c};
    int length = sizeof(array) / sizeof(array[0]);
    int max = a;

    for (i = 0; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Greatest number of the three is -> %d\n", max);

    return 0;
}