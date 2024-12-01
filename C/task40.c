#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        printf("Enter term %d : ", i+1);
        scanf("%d", &array[i]);
    }
    printf("Values in array -> ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
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
    printf("\nSorted array -> ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}