#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        int num = a[i];reverse=0;digit;
        while(num>0){
            digit = num%10;
            reverse = reverse*10+num;
            num = num/10;
        }

        if(a[i] == reverse){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}