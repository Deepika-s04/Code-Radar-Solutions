// Your code here...
#include<stdio.h>
#include<limits.h>

int main(){
    int size;
    scanf("%d",&size);

    if(size<2){
        return 0;
    }

    int arr[size];

     int firstmax = INT_MIN;
    int secondmax = INT_MIN;

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>firstmax){
            secondmax = firstmax;
            firstmax = arr[i];
        }else if(arr[i]>secondmax && arr[i]!=firstmax){
            secondmax = arr[i];
        }
    }

    int maxproduct = (firstmax-1) * (secondmax-1);
    printf("%d\n",maxproduct);
    return 0;
}