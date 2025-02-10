#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u",&num);
    printf("%d",__builtin_clz(num));
    return 0;
}