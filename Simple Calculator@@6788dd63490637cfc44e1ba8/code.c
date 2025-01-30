#include <stdio.h>
int main() {
    int num1,num2;
    char oper;
    scanf("%d %d %c",&num1,&num2,&oper);
    
    if(oper == '+'){
        printf("%d",num1+num2);
    }else if(oper == '-'){
        printf("%d",num1-num2);
    }else if(oper == '*'){
        printf("5d",num1*num2);
    }else if(oper == '/'){
        printf("%d",num1/num2);
    }else{
        printf("Error");
    }
    return 0;
}