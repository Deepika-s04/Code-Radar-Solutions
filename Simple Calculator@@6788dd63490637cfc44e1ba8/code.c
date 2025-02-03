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
        printf("%d",num1*num2);
    }else if(oper == '/'){
        if(num2 != 0){
            printf("%d",num1/num2);
        }else{
            printf("error");
        }
    }else{
        printf("Error: Invalid operator");
    }
    return 0;
}