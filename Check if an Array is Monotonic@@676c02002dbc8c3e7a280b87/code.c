// Your code here...
#include<stdio.h>
int main(){
    int size;
    int increasing = 1;
    int decreasing = 1;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < size-1; i++){
        if(arr[i]>arr[i+1]){
            increasing = 0;
        }else if(arr[i]<arr[i+1]){
            decreasing = 0;
        }
    }

    if(increasing||decreasing){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}