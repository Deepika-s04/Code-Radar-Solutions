#include <stdio.h>
int main() {
    int num1,num2;
    char oper;
    scanf("%d %d ",&num1,&num2,);
    scanf(" %c",&oper);

    if(oper == '+'){
        printf("%d",num1+num2);
    }else if(oper == '-'){
        printf("%d",num1-num2);
    }else if(oper == '*'){
        printf("%d",num1*num2);
    }else if(oper == '/'){
        printf("%d",num1/num2);
    }else{
        printf("Error");
    }
    return 0;
}