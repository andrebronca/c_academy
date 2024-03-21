#include <stdio.h>

int main(){
    int x;
    int count;
    int duo;

    //for(inicialization; exit_condition; repeat_each)
    for (x = 0; x < 3; x=x+1){
        puts("Sore shoulder surgery");
    }

    for (x = 0; x < 3; x++){
        puts("> Sore shoulder surgery");
    }

    for(count = -3; count < 3; count = count + 1){
        printf("%d\n", count);
    }

    for(duo = 2; duo <= 10; duo = duo + 2){
        printf("%d\n", duo);
    }
    putchar('\n');

    return 0;
}