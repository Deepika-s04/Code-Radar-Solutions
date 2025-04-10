// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    int count;

    fgets(str,100,stdin);
    for(int i = 0; str[i] != '\0';i++){
        count++;
    }
    printf("%d",count);
    return 0;
}