#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if((n=='A')||(n=='E')||(n=='I')||(n=='O')||(n=='U')||(n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u')){
        printf("Vowel\n");
    }else if(n>= 0 || n<=9){
        printf("Digit\n")
    }else if((n=='!')||(n=='#')||(n=='@')||(n=='$')||(n=='^')||(n=='(')||(n==')')||(n=='%')||(n=='*')){
        printf("Special Character\n");
    }else{
        printf("Consonant\n");
    }
    return 0;
}