#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], sumArr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of digits for each element
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int sum = 0;

        num = (num < 0) ? -num : num;
        
        while (num>0) {
            sum += num % 10;  // Extract last digit and add to sum
            num /= 10;        // Remove last digit
        }
        sumArr[i] = sum;  // Store sum in new array
    }

    // Output the sum array
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArr[i]);
    }

    return 0;
}


