#include <stdio.h>

int main(){
    int a;
    char c;

    //múltiplas condições em um for
    for(a = 1, c = 'Z'; a < 5; a++, c--){
        printf("%d%c\n", a, c);
    }

    int x;
    //for sem corpo
    for(x = 0; x < 10; x++, printf("%d, ", x));

    return 0;
}