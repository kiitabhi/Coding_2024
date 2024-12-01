#include <stdio.h>

void main() {
    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n], max;
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=1;i<n;i++) {
        if(a[i]>max)
            max=a[i];
    }
    printf("Largest element of the array : %d\n", max);
}