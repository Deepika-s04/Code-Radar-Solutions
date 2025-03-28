#include <stdio.h>

int main() {
    int N;
    int evencount = 0, oddcount = 0;

    // Read N first
    scanf("%d", &N);

    // Now declare array after knowing N
    int arr[N];

    // Read array elements
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Fix: Pass address of arr[i]
    }

    // Count even and odd numbers
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0)
            evencount++;
        else
            oddcount++;
    }

    // Print results
    printf("%d %d\n", evencount, oddcount);

    return 0;
}
