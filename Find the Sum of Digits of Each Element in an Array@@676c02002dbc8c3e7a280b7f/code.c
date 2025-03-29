// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int sumArr[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int digit;

    for(int i = 0;i<n;i++){
        int num = arr[i];
        int sum =0;
        while(num>0){
            digit = num%10;
            sum += digit;
            num /= 10;
        }

        sumArr[i] = sum;
    }

    for(int i =0;i<n;i++){
        printf("%d ",sumArr);
    }
    return 0;
}

