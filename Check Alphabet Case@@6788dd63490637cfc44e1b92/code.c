#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c.isUpper()){
        printf("Uppercase\n");
    }else if(c.isLower()){
        printf("Lowercase");
    }
    return 0;
}