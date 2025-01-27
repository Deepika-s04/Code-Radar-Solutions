#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int character;
    scanf("%c",&character);
    if(character.isUpper()){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}