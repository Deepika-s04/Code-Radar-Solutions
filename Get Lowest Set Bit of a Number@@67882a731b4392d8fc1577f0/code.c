#include <stdio.h>
int main() {
    int a,bit;
    scanf("%d",&a);
    bit = a & -a;
    printf("%d",bit);

    return 0;
}