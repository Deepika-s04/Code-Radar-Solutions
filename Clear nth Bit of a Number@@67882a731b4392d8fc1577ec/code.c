#include <stdio.h>
int main() {
   int a,b,clear;
   scanf("%d %d",&a,&b);
   clear = ~(1<<b);
   printf("%d",a&clear);

    return 0;
}