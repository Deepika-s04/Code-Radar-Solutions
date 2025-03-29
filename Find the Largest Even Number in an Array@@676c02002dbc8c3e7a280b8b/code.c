// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&a[i]);
    }

    
    if (N <= 0) { // Handling edge case where N is non-positive
        printf("-1\n");
        return 0;
    }else{
        int max = -1;
    for(int i = 0;i<N;i++){
        if(a[i]%2 == 0 && a[i]>max){
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
    }
    

    

    return 0;
}