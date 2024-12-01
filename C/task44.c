#include <stdio.h>
#include <math.h>

void main() {
    int i, n;
    float sum=0.0, mean, ss=0.0, sd=0.0;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        sum += a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++) {
        ss += pow(a[i]-mean, 2);
    }
    sd = sqrt(ss/n);
    printf("Standard deviation : %f\n", sd);
}