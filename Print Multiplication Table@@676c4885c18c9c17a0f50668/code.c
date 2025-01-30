#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        printf("2 x %d = %d",i,2*i);
    }
    return 0;
}