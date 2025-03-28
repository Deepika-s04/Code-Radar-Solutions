// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max;
    int min;
    for(int i = 0; i<N ;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<N;i++){
        max = arr[0];
        min = arr[0];
        if(arr[i]>max){
            max = arr[i];
        }else if (arr[i]<min){
            min = arr[i];
        }
    }

    printf("%d %d\n",max,min);

    return 0;
}