#include <stdio.h>

void readArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void dispArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mulArr(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size], result[size];
    printf("Enter the elements of the first array: ");
    readArr(arr1, size);
    printf("Enter the elements of the second array: ");
    readArr(arr2, size);
    printf("First array: ");
    dispArr(arr1, size);
    printf("Second array: ");
    dispArr(arr2, size);
    mulArr(arr1, arr2, result, size);
    printf("Resultant array after multiplication: ");
    dispArr(result, size);
    return 0;
}