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
    int i;
    int j;

    for(int i = 0; i < size; i++){
        int(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = size - 1; i >= 0; i--){
        printf("%d\n",arr[2]);
    }




    return 0;
}