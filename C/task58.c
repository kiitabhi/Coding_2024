#include <stdio.h>

int sum_array(int n, int a[]) {
    int i, sum=0;
    for(i=0;i<n;i++) {
        sum +=a[i];
    }
    return sum;
}

void main() {
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Sum of the elements of the array = %d\n", sum_array(n, a));
}