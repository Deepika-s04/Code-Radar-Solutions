// Your code here..
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N%2!=0){
        for(int i =1;i<=N;i++){
            for(int j = 1;j<=N;j++){
                if(j==N/2+1||i==N/2+1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else if(N%2==0){
        for(int i =1;i<=N;i++){
            for(int j = 1;j<=N;j++){
                if(j==N/2||i==N/2){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}.