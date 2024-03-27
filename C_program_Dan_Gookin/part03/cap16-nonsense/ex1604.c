#include <stdio.h>

void proc(void);
void proc2(void);

int main(){
    puts("First call");
    proc();
    puts("Second call");
    proc();
    puts("3 call");
    proc2();
    puts("4 call");
    proc2();
    return 0;
}

void proc(void){
    int a;  //variável local
    printf("The value of variable a is %d\n", a);
    printf("Enter a new value: ");
    scanf("%d", &a);
}

void proc2(void){
    /* static int é inicializada com: 0
    o valor é retido para cada chamada da função
    é uma storage class
    */
    static int a;  //variável local static
    printf("2) The value of variable a is %d\n", a);
    printf("2) Enter a new value: ");
    scanf("%d", &a);
}