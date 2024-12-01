#include <stdio.h>
#include <string.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    result = compareStrings(str1, str2);
    if (result == 0) {
        printf("Both strings are same.\n");
    } else if (result < 0) {
        printf("In the alphabetical order first string will be before the second string.\n");
    } else {
        printf("In the alphabetical order first string will be after the second string.\n");
    }

    result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are same using library function.\n");
    } else if (result < 0) {
        printf("In the alphabetical order first string will be before the second string (using library function).\n");
    } else {
        printf("In the alphabetical order first string will be after the second string (using library function).\n");
    }

    return 0;
}