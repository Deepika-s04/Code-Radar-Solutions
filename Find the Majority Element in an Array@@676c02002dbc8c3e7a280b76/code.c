// // Your code here...
// #include<stdio.h>
// int main(){
//     int size;
//     scanf("%d",&size);

//     int arr[size];

//     for(int i = 0; i< size; i++){
//         scanf("%d",&arr[i]);
//     }

//     int count = 0;
//     int majority = size/2;

//     for(int i = 0; i < size; i++){
//         for(int j = i+1; j < size; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }

//         if(count > majority){
//             printf("%d",arr[i]);
//             return 0;
//         }   
//         }

//         printf("-1\n");
//         return 0;

    
// }

#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking for majority element
    for (int i = 0; i < size; i++) {
        int count = 0;
        
        // Count occurrences of arr[i]
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // Check if count is greater than half of the size
        if (count > size / 2) {
            printf("%d\n", arr[i]);
            return 0; // Stop the program as we found the answer
        }
    }

    printf("-1\n"); // If no majority element found
    return 0;
}
