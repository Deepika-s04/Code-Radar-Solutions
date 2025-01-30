#include <stdio.h>
int main() {
    int num1,num2;
    char operator;
    scanf("%d %d %c",&num1,&num2,&operator);
    if(operator == '+'){
        printf("%d",num1+num2);
    }else if(operator == '-'){
        printf("%d",num1-num2);
    }else if(operator == '*'){
        printf("5d",num1*num2);
    }else if(operator == '/'){
        printf("%d",num1/num2);
    }else{
        printf("Error");
    }
    return 0;
}