#include <stdio.h>

int main(){
    char alphabet;

    for(alphabet = 'A'; alphabet <= 'Z'; alphabet++){
        printf("%c ", alphabet);
    }
    putchar('\n');

    return 0;
}