#include <stdio.h>

void main() {
    int n, i, j, sum, s, si, ei;
    int f=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the sum : ");
    scanf("%d", &sum);
    for (i=0;i<n;i++) {
        s = 0;
        si=i;
        for(j=i;j<n;j++) {
            s += a[j];
            if (s == sum){
                f=1;
                break;
            }
        }
        ei=j;
        if (f==1)
            break;
    }
    printf("Sub array which adds to %d : [", sum);
    for(i=si;i<=ei;i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}