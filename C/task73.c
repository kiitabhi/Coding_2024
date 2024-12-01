#include <stdio.h>

int main() {
    char str[100], charToReplace, charToReplaceWith;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to be replaced: ");
    scanf(" %c", &charToReplace);

    printf("Enter the character to be replaced with: ");
    scanf(" %c", &charToReplaceWith);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToReplace) {
            str[i] = charToReplaceWith;
        }
    }

    printf("After replacement, string is: %s", str);

    return 0;
}