// Your code here...
#include<stdio.h>
#include<limits.h>

int main(){
    int size;
    scanf("%d",&size);

    if(size<2){
        printf("-1\n");
        return 0;
    }

    int arr[size];
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }

    if(second == INT_MIN){
        printf("-1\n");
    }else{
        printf("%d",second);
    }
    return 0;
}