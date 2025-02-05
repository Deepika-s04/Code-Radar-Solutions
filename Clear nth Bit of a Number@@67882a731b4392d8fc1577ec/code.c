#include <stdio.h>
int main() {
   int a,b,clear;
   scanf("%d %d",&a,&b);
   clear = a & (~(1>>b));
   printf("%d",clear);

    return 0;
}