// Your code here...

#include<stdio.h>
int main(){
    int s;
    scanf("%d",%d);

    int a[s];

    for(int i = 0; i < s; i++){
        scanf("%d",&a[i]);
    }

    int max_diff = a[1] - a[0];
    for(int i = 0; i < s; i++){
        int diff = a[i+1] - a[i];
        if(diff>max_diff){
            max_diff=diff;
        }
    }

    printf("%d",max_diff);


    return 0;
}