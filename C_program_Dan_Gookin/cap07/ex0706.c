#include <stdio.h>

int main(){
    int fav;
    float ffav;

    printf("What is your favorite number: ");
    scanf("%d", &fav);  //& deve prefixar qualquer tipo de variável, exceto array
    //& é um operador de endereço

    printf("What is your favorite float number: ");
    scanf("%f", &ffav);

    printf("%d is my favorite number, too! \n", fav);
    printf("%f is my favorite float number, too! \n", ffav);

    return 0;
}