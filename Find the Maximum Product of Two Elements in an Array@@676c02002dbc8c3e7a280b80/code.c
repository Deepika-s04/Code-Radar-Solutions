// #include<stdio.h>
// #include<limits.h>

// int main() {
//     int size, num;
//     scanf("%d", &size);
    
//     if (size < 2) return 0;

//     int firstmax = INT_MIN, secondmax = INT_MIN;

//     for (int i = 0; i < size; i++) {
//         scanf("%d", &num);
//         if (num > firstmax) {
//             secondmax = firstmax;
//             firstmax = num;
//         } else if (num > secondmax && num != firstmax) {
//             secondmax = num;
//         }
//     }

//     printf("%d\n", (firstmax - 1) * (secondmax - 1));
//     return 0;
// }

#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    if(size<2){
        return 0;
    }

    int arr[size];

    for(int i = 0; i<size;i++){
        scanf("%d",&arr[i]);
    }

    int a = arr[0];
    int b = arr[1];
    for(int i = 0;i<size;i++){
        if(arr[i]*arr[i+1] > a*b){
            a = arr[i];
            b = arr[i+1];
        }
    }

    printf("%d\n",a*b);



}
