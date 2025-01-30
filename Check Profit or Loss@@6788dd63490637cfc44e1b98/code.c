#include <stdio.h>
int main() {
    int costPrice,sellingPrice;
    scanf("%d %d",&costPrice,&sellingPrice);
    if(costPrice>sellingPrice){
        printf("Loss");
    }else if(sellingPrice>costPrice){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }

    return 0;
}