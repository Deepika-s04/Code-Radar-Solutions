#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_val = arr[0];  // Store the smallest value so far
    int max_diff = arr[1] - arr[0];  // Store max difference

    for (int i = 1; i < n; i++) {
        if (arr[i] - min_val > max_diff) {
            max_diff = arr[i] - min_val;  // Update max difference
        }
        if (arr[i] < min_val) {
            min_val = arr[i];  // Update min value
        }
    }

    printf("%d\n", max_diff);  // Print the max difference
    return 0;
}
