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

// #include <stdio.h>

int main() {
    int size, maxEven = -1; // Initialize maxEven to -1
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > maxEven) { // Check if the number is even and largest so far
            maxEven = arr[i];
        }
    }
    
    printf("Largest even number: %d\n", maxEven);
    
    return 0;
}
