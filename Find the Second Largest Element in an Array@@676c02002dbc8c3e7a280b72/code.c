// Your code here...
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }

    int large1 = 0;
    int large2 = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > large1){
            large1 = arr[i];
            large2 = large1;
        }else if(arr[i] > large2){
            large2 = arr[i];
        }
    }

    printf("%d\n",large2);
    return 0;
}