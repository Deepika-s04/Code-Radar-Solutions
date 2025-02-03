#include <stdio.h>


int main() {
    int n,a;
    scanf("%d",&n);

    for(a = 2; a <= n/2; a++){
        if(n%a == 0){
            printf("Not Prime");
            break;
        }else{
            printf("Prime");
        }
    }

    return 0;
}