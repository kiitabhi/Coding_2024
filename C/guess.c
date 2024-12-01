// number guessing game

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, random = (rand() % 100) + 1;
    int c = 1;
    printf("Guess a number between 1 and 100 -> ");
    scanf("%d", &i);
    while (i != random) {
        if (random < i) {
            printf("No! the number is smaller\n");
            c += 1;
        }
        else if (random > i) {
            printf("No! the number is greater\n");
            c += 1;
        }
        else {
            break;
        }

        printf("Guess the number -> ");
        scanf("%d", &i);
    }

    printf("Yessss.... You guessed it right in %d chances...\n", c);

    return 0;
}