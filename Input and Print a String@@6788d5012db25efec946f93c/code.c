#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    char s[num];
    scanf("%s",&s);
    printf("You entered: ");
    printf("%s",s);
    return 0;
}