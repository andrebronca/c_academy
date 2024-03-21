#include <stdio.h>

int main(){
    int ch;
    printf("Press Enter: ");
    getchar();
    ch = 'H';
    putchar(ch);    //exibe apenas um caracter
    ch = 'i';
    putchar(ch);
    putchar('!');
    return 0;
}