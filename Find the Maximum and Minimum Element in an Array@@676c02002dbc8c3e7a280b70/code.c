// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N ;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i<=N;i++){
        if(arr[i]>max){
            max = arr[i];
        }else if (arr[i]<min){
            min = arr[i];
        }
    }

    printf("%d %d\n",max,min);

    return 0;
}