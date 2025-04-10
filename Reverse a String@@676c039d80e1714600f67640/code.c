// Your code here...
#include<stdio.h>
int main(){
    int length = 0;
    char str[100];
    fgets(str,sizeof(str),stdin);

    for(int j = 0;str[j]!='\0';j++){
        if(str[j]=='\n'){
            str[j]=='\0';
            break;
        }
    }
    int i = 0;
    while(str[i] != '\0'){
        length++;
        i++;
    }

    for(int i = length - 1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}