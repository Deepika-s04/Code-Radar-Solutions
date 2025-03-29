// Your code here...
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i< size; i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    int majority = size/2;
    int m;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                m = arr[i];
                count++;
            }
        }
    }

    if(count > majority){
        printf("%d",m);
    }else{
        printf("-1");
    }
    
}