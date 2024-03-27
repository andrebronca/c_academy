#include <stdio.h>

int verify(int check);

int main(){
    int s;
    printf("Enter a value (0-100): ");
    scanf("%d", &s);
    if (verify(s)){
        printf("%d is in range.\n", s);
    } else {
        printf("%d is out of range.\n", s);
    }
    return 0;
}

int verify(int check){
    /* declara duas constantes ordenadas
    false terá o valor 0, true terá o valor 1
    em C 0 é false e o que for diferente 
    é true */
    enum { false, true };
    if (check < 0 || check > 100)
        return false;
    return true;
}

/*
const int zero  = 0;
const int one   = 1;
const int two   = 2;
const int three = 3;

equivale a:
enum { zero, one, two, three };

pode ser atribuído um valor diferente do esquema
iniciando em 0
enum { jack=11, queen, king }
No exemplo acima a contagem inicia em 11
queen será 12
king será 13

*/