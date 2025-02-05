#include <stdio.h>
int main() {
    int a,b,num;
    scanf("%d %d",&a,&b);
    num = 1<<b;
    printf("%d",a^num);

    return 0;
}