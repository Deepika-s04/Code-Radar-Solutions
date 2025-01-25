#include <stdio.h>


int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    float avg = (float)(n1+n2+n3)/3;
    printf("Average: %.2f",avg);

    return 0;
}