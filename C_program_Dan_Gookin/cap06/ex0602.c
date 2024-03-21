#include <stdio.h>

int main(){
    //tipos de dados
    char c;
    int i;
    float f;
    double d;

    c = 'a';
    i = 1;
    f = 19.8;
    d = 20000.009;

    printf("%c \n", c);
    printf("%d \n", i);
    printf("%f \n", f);
    printf("%f \n", d);
    printf("----------------\n");
    printf("%c \n%d \n%f \n%.1f \n%f \n", c, i, f, f, d);
    return 0;
}