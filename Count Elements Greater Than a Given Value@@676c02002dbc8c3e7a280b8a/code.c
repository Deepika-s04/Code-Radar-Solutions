#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int K;
    scanf("%d", &K);

    int found = 0;  // Flag to check if an element greater than K exists

    for (int i = 0; i < N; i++) {
        if (arr[i] > K) {
            found = 1;  // Mark found
            break;  // No need to check further
        }
    }

    printf("%d", found);  // Print 1 if found, otherwise 0
    return 0;
}
