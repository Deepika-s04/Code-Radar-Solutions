// Your code here...
#include<stdio.h>
int main(){
    int N;
    int evencount = 0,oddcount = 0;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N ;i++){
    scanf("%d ",arr[i]);
    }
    for(int i = 0;i<N;i++){
        if(arr[i]%2==0){
        evencount++;
        }else{
        oddcount++;
    }
}
printf("%d %d \n",evencount,oddcount);
return 0;
}