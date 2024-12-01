#include <stdio.h>
#include <math.h>

void main() {
    int i, j, n, r;
    printf("Enter range : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++) {
            printf(" ");
        }
        int s=pow(11, (i-1));
        while(s!=0) {
            r=s%10;
            printf("%d ", r);
            s=s/10;
        }
        printf("\n");
    }
}