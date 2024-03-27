#include <stdio.h>

//lendo dados do terminal
int main(int argc, char *argv[]){

    if(argc > 1)
        printf("Greetings, %s!\n", argv[1]);
    
    printf("You typed %d arguments. \n", argc);
    for(int x = 0; x < argc; x++){
        printf("Arg#%d = %s.\n",x, argv[x]);
    }

    return 0;
}

/*
TESTANDO:
Depois que gerar o executável, execute o arquivo e coloque algo depois do nome

COMPILAR VIA TERMINAL:
gcc ex1501.c -o ex1501

EXECUTAR COM ARGUMENTO:
ex1501 argumento1

EXPLICAÇÃO:
1. argc:

    Tipo: int (inteiro)
    Significado: Contagem de argumentos passados para o programa na linha de comando.
    Valor:
        0: Se nenhum argumento for passado.
        1: Se pelo menos um argumento for passado (o nome do programa).
        N: Se N argumentos forem passados (N > 1).

2. argv:

    Tipo: char * (ponteiro para um vetor de caracteres)
    Significado: Vetor de strings que contém os argumentos passados para o programa na linha de comando.
    Conteúdo:
        argv[0]: Sempre contém o nome do programa.
        argv[1]: Contém o primeiro argumento passado.
        argv[2]: Contém o segundo argumento passado.
        ...:
        argv[argc-1]: Contém o último argumento passado.

*/