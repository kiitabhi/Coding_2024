#include <stdio.h>

void main() {
    int n, k, i, c=1;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter values in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("enter key: ");
    scanf("%d", &k);
    if (n % k == 0) {
        for(i = 0;i < n;i+=k) {
            int temp = a[i];
            a[i] = a[i+k-1];
            a[i+k-1] = temp;
        }
    }
    else {
        while(n-c >= k){
            int temp = a[i];
            a[i] = a[i+k-1];
            a[i+k-1] = temp;
            c++;
        }
    }
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}