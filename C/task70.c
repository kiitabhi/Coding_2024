#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }
    length--;

    printf("Length of the string = %d\n", length);

    // Using library function
    int lengthWithLib = strlen(str) - 1;
    printf("Length of the string using library function = %d\n", lengthWithLib);

    return 0;
}