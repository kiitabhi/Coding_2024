#include <stdio.h>

void main() {
    int n, i, j;
    int s2=0;
    printf("Enter the range : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int s1=0;
        for(j=1;j<=i;j++){
            s1=s1+j;
        }
        s2=s2+s1;
    }
    printf("Sum of the series = %d\n", s2);
}