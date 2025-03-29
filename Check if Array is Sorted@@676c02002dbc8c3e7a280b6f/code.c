// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N; i++){
        scanf("%d",&arr[i]);
    }

    int i,j;
    int temp;
    for(int i = 0;i<N-1;i++){
        for(int j = i+1;j<N-1;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0;i<N-1;i++){
        printf("%d",a[i]);
    }
}