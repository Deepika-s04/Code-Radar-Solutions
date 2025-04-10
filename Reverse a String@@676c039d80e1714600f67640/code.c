// Your code here...
#include<stdio.h>
int main(){
    int length = 0;
    char str[100];
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        length++;
    }

    for(int i = length - 1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}