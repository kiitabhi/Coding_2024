#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1;
    str[length] = '\0';

    // Reverse without using library function
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("Reverse of the given string: %s\n", reversed);

    // Reverse using library function (strrev is not standard in C, so we do it manually)
    char str2[100];
    strcpy(str2, str);
    length = strlen(str2);
    for (i = 0; i < length / 2; i++) {
        char temp = str2[i];
        str2[i] = str2[length - 1 - i];
        str2[length - 1 - i] = temp;
    }

    printf("Reverse using manual method (similar to strrev): %s\n", str2);

    return 0;
}