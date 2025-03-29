
#include <stdio.h>

int main() {
    int size, maxEven = -1; // Initialize maxEven to -1
    

    scanf("%d", &size);
    
    int arr[size];
   
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > maxEven) { // Check if the number is even and largest so far
            maxEven = arr[i];
        }
    }
    
    printf("%d\n", maxEven);
    
    return 0;
}
