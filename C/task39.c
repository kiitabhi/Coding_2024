#include <stdio.h>

void main() {
    int i, n, t;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Array elements : ");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    if (n%2==0) {
        for(i=0;i<(n/2);i++) {
            t=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=t;
        }
    }
    else {
        for(i=0;i<((n-1)/2);i++) {
            t=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=t;
        }
    }
    printf("\nReverse of array : ");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}