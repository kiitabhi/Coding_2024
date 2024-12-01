#include <stdio.h>
#include <string.h>

void rm_space(char *str) {
    char str2[100];
    int i, j=0;
    for(i=0;i!='\0';i++) {
        if(str[i] != ' ')
            str2[j++] = str[i];
    }
    str2[j]='\0';
    puts(str2);
}

void main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);
    rm_space(str);
}