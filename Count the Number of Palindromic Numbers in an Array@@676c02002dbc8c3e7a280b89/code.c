#include<stdio.h>
int main(){
    int n,count = 0;

    scanf("%d",&n);
    int a[n];

    for(int i = 0;i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        int num = a[i];
        int reversed = 0;
        while(num>0){
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num/10;
        }

        if(a[i] == reversed){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n, count = 0;
    
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         int num = a[i], reversed = 0, digit;

//         // Reverse the number
//         while (num > 0) {
//             digit = num % 10;
//             reversed = reversed * 10 + digit;
//             num /= 10;
//         }

//         // Check if it's a palindrome
//         if (a[i] == reversed) {
//             count++;
//         }
//     }

//     printf("%d\n", count);

//     return 0;
// }
