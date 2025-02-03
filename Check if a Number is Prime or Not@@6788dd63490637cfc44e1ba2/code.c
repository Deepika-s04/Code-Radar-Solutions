#include <stdio.h>
#include <math.h>


int main() {
    int n,a,isPrime=1;
    scanf("%d",&n);

    if(n==0){
        printf("Not Prime");
        return 0;
    }

    for(a = 2; a <= sqrt(n); a++){
        if(n%a == 0){
            printf("Not Prime");
            return 0;
        }else{
            printf("Prime");
        }
    }

    return 0;
}