#include <stdio.h>

enum {domingo, segunda, 
    terca, quarta, quinta,
    sexta, sabado};

int main(){
    int dia;
    printf("Informe o numero do dia da semana, 0 - 6: ");
    scanf("%d", &dia);

    if (dia >= 0 && dia < 7){
        switch (dia) {
            case domingo:
                printf("Domingo");
                break;
            case segunda:
                printf("Segunda-feira");
                break;
            case terca:
                printf("Terça-feira");
                break;
            case quarta:
                printf("Quarta-feira");
                break;
            case quinta:
                printf("Quinta-feira");
                break;
            case sexta:
                printf("Sexta-feira");
                break;
            case sabado:
                printf("Sábado");
                break;
        }
    }

    return 0;
}