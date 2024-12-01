#include <stdio.h>

int main() {
    char str[100];
    char firstChars[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            firstChars[j++] = str[i];
        }
    }
    firstChars[j] = '\0';

    printf("First character of each word of the given string: %s\n", firstChars);

    return 0;
}