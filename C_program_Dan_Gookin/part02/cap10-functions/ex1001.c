#include <stdio.h>

/* function prototype */
void prompt();  //void prompt(void);

int main(){
    int loop;
    char input[32];
    loop = 0;
    while (loop < 5){
        prompt();
        fgets(input, 32, stdin);
        loop++;
    }
    return 0;
}

//a função não requer parâmetros, por isso é void
//a função não retorna nada, por isso o retorno é void
void prompt(void){
    printf("C:\\DOS> ");
}