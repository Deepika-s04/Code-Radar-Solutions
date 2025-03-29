// Your code here...
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int temp;

    for(int i =0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if(size%2==0){
        int mid = size/2;
        printf("%d",arr[mid]);
    }else{
        int mid = (size/2)+1;
        printf("%d",arr[mid]);
    }
    return 0;
}