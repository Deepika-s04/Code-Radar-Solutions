#include <stdio.h>


int main() {
    int radius;
    scanf("%f",&radius);
    const float pi = 3.14;
    float area = pi * radius * radius;
    printf("Area :%.2f",area);
    return 0;
}