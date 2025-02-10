#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    printf("%d",__buitin_ctz(num));

    return 0;
}