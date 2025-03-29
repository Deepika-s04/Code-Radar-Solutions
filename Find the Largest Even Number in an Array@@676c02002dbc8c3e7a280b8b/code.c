#include <stdio.h>

int main() {
    int size, maxEven = -1; // Initialize maxEven to -1
    
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        
        // Check if it's even and either first even found or greater than maxEven
        if (arr[i] % 2 == 0 && (maxEven == -1 || arr[i] > maxEven)) { 
            maxEven = arr[i];
        }
    }
    
    printf("%d\n", maxEven);
    
    return 0;
}

