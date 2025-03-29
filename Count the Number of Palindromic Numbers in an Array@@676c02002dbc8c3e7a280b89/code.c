#include<stdio.h>
int main(){
    int n;
    int digit;
    int reverse = 0;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        int num = a[i];
        while(num>0){
            digit = num%10;
            reverse = reverse*10+num;
            num = num/10;
        }

        if(a[i] == reversed){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}