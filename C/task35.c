#include <stdio.h>

void main() {
    int n, i;
    int s=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("Sum of the elements of the array : %d\n", s);
}