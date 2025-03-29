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

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > majority){
            printf("%d",arr[i]);
        }else{
            printf("-1\n");
        }   
        }


    return 0;
    
}