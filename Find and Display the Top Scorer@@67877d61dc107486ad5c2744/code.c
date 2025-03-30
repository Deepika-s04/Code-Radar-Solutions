// Your code here...
#include <stdio.h>

// Function to find the index of the top scorer
int findTopScorer(float marks[], int size) {
    int topIndex = 0; // Assume the first student is the top scorer
    
    for (int i = 1; i < size; i++) {
        if (marks[i] > marks[topIndex]) {
            topIndex = i; // Update top scorer index
        }
    }
    
    return topIndex;
}

int main() {
    int n;

    scanf("%d", &n);

    char names[n][50]; // Array to store student names
    int rollNos[n];    // Array to store roll numbers
    float marks[n];    // Array to store marks

    // Input student details
    for (int i = 0; i < n; i++) {
       
        scanf("%s", names[i]);
       
        scanf("%d", &rollNos[i]);
        
        scanf("%f", &marks[i]);
    }

    // Find the top scorer
    int topIndex = findTopScorer(marks, n);

    // Display the top scorer details
    printf("\nTop Scorer Details:\n");
    printf("%s\n", names[topIndex]);
    printf("%d\n", rollNos[topIndex]);
    printf("%.2f\n", marks[topIndex]);

    return 0;
}
