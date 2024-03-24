#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, a, b, v;
    puts("100 random Numbers");
    for(a = 0; a < 20; a++){
        for(b = 0; b < 5; b++){
            r = rand();
            v = (r % 100) + 1;  //faixa de valores entre 1 e 100
            printf("%d\t%d\t", r, v);
        }
        putchar('\n');
    }

    return 0;
}