#include <stdio.h>

void main() {
    int n, i, num, p;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted : ");
    scanf("%d", &num);
    printf("Enter the position of insertion : ");
    scanf("%d", &p);
    printf("Array elements before insertion : ");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    for(i=n;i>=p;i--) {
        a[i]=a[i-1];
    }
    a[p-1]=num;
    printf("\nArray elements after insertion : ");
    for(i=0;i<=n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}