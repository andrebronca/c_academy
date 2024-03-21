#include <stdio.h>

int main(){
    int a, b, c;
    printf("a) I'm waiting for a character: ");
    //c = getchar();
    a = getchar();      //capturando caracter
    b = getchar();
    c = getchar();
    printf("a) I waited for the '%c', '%c', '%c' character. \n", a, b, c);

    return 0;
}