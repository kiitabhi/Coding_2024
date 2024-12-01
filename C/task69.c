#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searching element: ");
    scanf("%d", &target);
    int result = linearSearch(arr, size, target, 0);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}