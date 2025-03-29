// Your code here...
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }

    int temp;


    for(int i = 0; i < size; i++){
        int(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d\n",arr[size-2]);





    return 0;
}