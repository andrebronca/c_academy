#include <stdio.h>
#include <stdlib.h>

int main(){
    const int size = 100;
    int randomNumbers[100];
    int temp, r, v;

    /* gerando números aleatórios e armazenando no array */
    for(int i = 0; i < size; i++){
        r = rand();
        v = (r % 100) + 1;
        randomNumbers[i] = v;
    }

    /* Exibindo o array gerado */
    puts("Original array");
    for(int i = 0; i < size; i++)
        printf("%d\t", randomNumbers[i]);
    putchar('\n');

    /* ordenando o array */
    for(int f = 0; f < size - 1; f++){
        for(int i = f + 1; i < size; i++){
            if (randomNumbers[f] > randomNumbers[i]){
                temp = randomNumbers[f];
                randomNumbers[f] = randomNumbers[i];
                randomNumbers[i] = temp;
            }
        }
    }

    /* Exibindo o array ordenado */
    puts("Array ordenado");
    for(int i = 0; i < size; i++)
        printf("%d\t", randomNumbers[i]);
    putchar('\n');

    return 0;
}
