// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int a[N];

    for(int i = 0; i < N; i++){
        scanf("%d",&a[i]);
    }

    int T;
    scanf("%d",&T);

    int found = 0;

    for(int i = 0; i< N ;i++){
        if(a[i] == T){
            printf("%d\n",i);
            found = 1;
            break;
        }
    }

    if(found != 1){
        printf("-1\n");
    }

    return 0;
}