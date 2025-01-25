#include <stdio.h>

int main() {
    char username[100];
    int age;
    char hobby[100];
    scanf("%s %d %s",&username,&age,&hobby);
    printf("Name: %s\n",username);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);


    return 0;
}