#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int digit,reversed = 0;

    for(int i = 0;i<n;i++){
        while(a[i]>0){
            digit  = a[i]%10;
            reversed = reversed*10+digit;
            a[i] = a[i]/10;
        }
    }

    for(i = 0;i<n;i++){
        if(a[i]==reversed){
            count++;
        }
    }
    printf("%d",count);
}