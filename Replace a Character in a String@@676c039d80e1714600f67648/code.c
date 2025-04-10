// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    int length=0;
    fgets(str,sizeof(str),stdin);

    for(int i =0;str[i]!='\0';i++){
        length++;
    }

    char old;
    scanf(" %c",&old);

    char new;
    scanf(" %c",&new),

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==old){
            str[i]==new;
        }
    }

    printf("%s",new);
    return 0;
}