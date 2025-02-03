#include <stdio.h>
#include <math.h>


int main() {
    int n,a,flag = 1;
    scanf("%d",&n);
    for(a = 2;a<=n/2;a++){
        if(n%a==0){
            flag = 0;
            break;
        }
    }

    if(flag==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}