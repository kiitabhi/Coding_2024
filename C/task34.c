#include <stdio.h>

void main() {
    int n, i;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Elements of the array : ");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}