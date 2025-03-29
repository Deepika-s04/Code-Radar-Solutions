// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int K;
    scanf("%d",&K);

    for(int i = 0;i<n;i++){
        int count = 0;
        if(arr[i]>K){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}