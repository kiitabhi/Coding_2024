#include <stdio.h>

void main() {
    int n, i, num;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    int f = 0;
    for(i=0;i<n;i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d", &num);
    for(i=0;i<n;i++) {
        if (num == a[i]){
            f=1;
            break;
        }
    }
    if (f==1)
        printf("Element %d found at position %d\n", num, i+1);
    else
        printf("Element %d not found in the array\n", num);
}