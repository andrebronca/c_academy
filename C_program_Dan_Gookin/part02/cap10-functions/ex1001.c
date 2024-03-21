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

void prompt(void){
    printf("C:\\DOS> ");
}