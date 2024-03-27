#include <stdio.h>

//se a função for declarada antes de ser utilizada, não precisa de prototipo
void prompt(void){
    printf("C:\\DOS> ");
}

void busy(void){
    int loop;
    char input[32];
    loop = 0;
    while (loop < 5){
        prompt();
        fgets(input, 32, stdin);
        loop++;
    }
}

int main(){
    busy();
    return 0;
}