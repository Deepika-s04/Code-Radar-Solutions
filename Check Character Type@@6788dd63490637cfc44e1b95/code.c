#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("Digit\n");
    }
    else if(isalpha(ch)){
        ch = tolower(ch);
        if (ch == 'a' || ch = 'e' || ch ='i' || ch = 'o' || ch = 'u'){
            printf("Vowels\n");
        }else{
                printf("Consonant\n");
        }
    }
    else{
        printf("Special Character\n");
    }
    return 0;
}