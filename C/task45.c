#include <stdio.h>

void main() {
    int n1, n2, i, j;
    printf("Enter size of 1st array : ");
    scanf("%d", &n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter size of 2nd array : ");
    scanf("%d", &n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &b[i]);
    }
    printf("First array : ");
    for(i=0;i<n1;i++) {
        printf("%d ", a[i]);
    }
    printf("\nSecond array : ");
    for(i=0;i<n2;i++) {
        printf("%d ", b[i]);
    }
    int c[n1+n2];
    for(i=0;i<n1+n2;i++) {
        if(i<n1)
            c[i]=a[i];
        else
            c[i]=b[i-n1];
    }
    for (i = 0; i < (n1+n2) - 1; i++) {
        for (j = 0; j < (n1+n2) - i - 1; j++) {
            if(c[j+1]<c[j]) {
                int t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
    }
    printf("\nMerged array : ");
    for(i=0;i<n1+n2;i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}