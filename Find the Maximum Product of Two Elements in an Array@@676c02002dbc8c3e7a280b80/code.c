// Your code here...
#include<stdio.h>
int main(){
    int size;
    scanf("5d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    int firstmax = 0;
    int secondmax = 0;
    for(int i = 0; i < size; i++){
        if(arr[i]>firstmax){
            firstmax = arr[i];
            secondmax = firstmax;
        }else if(arr[i]>secondmax){
            secondmax = arr[i];
        }
    }

    int maxproduct = (firstmax-1)*(secondmax-1);
    printf("%d\n",maxproduct);
}