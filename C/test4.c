#include <stdio.h>

void main() {
    int i, n, a[n], sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d element(s) in the array: ", n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    int *ptr=a;
    for(i=0;i<n;i++)
        sum += *(ptr+i);
    printf("Sum of elements of array: %d", sum);
}