// // Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     int a[N];
//     for(int i = 0;i<N;i++){
//         scanf("%d",&a[i]);
//     }

    
//     int max = -1;
//     for(int i = 0;i<N;i++){
//         if(a[i]%2 == 0 && a[i]>max){
//             max = a[i];
//         }
//     }
//     printf("%d",max);
//     return 0;


// }

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
