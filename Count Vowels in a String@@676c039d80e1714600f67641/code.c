// Your code here...
#include<stdio.h>
int main(){

    char s1[100];
    fgets(s1,sizeof(s1),stdin);
    int count = 0;
    for(int i = 0;s1[i]!='\0';i++){
        char ch = s1[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u || ch=='A'|| ch=='E' || ch=='I' || ch'U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}