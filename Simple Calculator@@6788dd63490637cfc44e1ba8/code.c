#include <stdio.h>
int main() {
    int num1,num2;
    char operator;
    scanf("%d %d %c",&num1,&num2,&operator);
    switch(operator){
        case '+':printf("%d",num1+num2);
        break;
        case '-':printf("%d",num1-num2);
        break;
        case '*': printf("%d",num1*num2);
        break;
        case '/': printf("%d",num1/num2);
        break; 
        default:printf("Error");  
    }

    return 0;
}