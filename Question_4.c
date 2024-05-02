#include <stdio.h>

void squareElements(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
        *(arr + i) *= *(arr + i);
    }
}

int main() {
    int arr[] = {1, 4, 9, 16, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original Array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    squareElements(arr, size);
    
    printf("Squared Array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
