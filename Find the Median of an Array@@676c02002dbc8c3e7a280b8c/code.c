#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    if (size <= 0) {

        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting using Bubble Sort (not efficient but works for small input sizes)
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Correct median calculation
    int mid = size / 2;

    if (size % 2 == 0) {
        printf("%d\n", arr[mid - 1]);  // First middle element
    } else {
        printf("%d\n", arr[mid]);  // Middle element
    }

    return 0;
}
