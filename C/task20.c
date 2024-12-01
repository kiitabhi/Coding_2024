#include <stdio.h>

void main() {
    int n;
    float s=0;
    for(int i=0;i<10;i++){
        printf("Enter number %d : ", (i+1));
        scanf("%d", &n);
        s=s+n;
    }
    printf("The sum is %f. ", s);
    printf("The average is %f\n", (s/10));
}