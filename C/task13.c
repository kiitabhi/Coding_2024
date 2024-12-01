#include <stdio.h>

void main() {
    int a,b;
    printf("Enter the previous meter reading : ");
    scanf("%d", &a);
    printf("Enter the current meter reading : ");
    scanf("%d", &b);
    int diff=b-a;
    double cost;
    if(diff <= 100) {
        cost=1.40*diff;
    }
    else if(diff <= 200) {
        cost=(100*1.40)+((diff-100)*2.50);
    }
    else if(diff > 200) {
        cost=(100*1.40)+(100*2.50)+((diff-200)*3.20);
    }
    printf("Bill Amount : %f\n",cost);
}