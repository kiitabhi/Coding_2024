#include <stdio.h>

void main() {
    int n, i, j;
    float m;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        printf("Enter term %d : ", i+1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if(array[j+1]<array[j]) {
                int t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", array[i]);
    }
    if (n%2==0) {
        m = (array[(n/2)-1]+array[n/2])/2.0;
        printf("\nMedian of the given array : %.1f\n", m);
    }
    else {
        int(m) = array[(n-1)/2];
        printf("\nMedian of the given array : %d\n", m);
    }
}