#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Copy without using library function
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    printf("After copying:\n");
    printf("Source string: %s", source);
    printf("Destination string: %s", destination);

    // Copy using library function
    strcpy(destination, source);

    printf("After copying using library function:\n");
    printf("Source string: %s", source);
    printf("Destination string: %s", destination);

    return 0;
}