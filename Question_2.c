#include <stdio.h>

int main() {
    int array[] = {1, 4, 9,16, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int largest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The largest element in the array is: %d", largest);

    return 0;
}
