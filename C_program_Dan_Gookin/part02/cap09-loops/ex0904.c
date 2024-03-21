#include <stdio.h>

int main(){
    int x;
    x = 0;
    while( x < 10){
        puts("Sore shoulder surgery");
        x++;
    }

    int fibo, nacci;
    fibo = 0;
    nacci = 1;

    do {
        printf("%d ", fibo);
        fibo += nacci;
        printf("%d ", nacci);
        nacci += fibo;
    } while(nacci < 300);
    putchar('\n');

    return 0;
}