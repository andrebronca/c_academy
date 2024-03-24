#include <stdio.h>

int main(){
    int const size = 6;
    char caesar[6][9] = {
        "Julius", "Augustus", "Nero", "Tiberius", "Caligula", "Claudius"
    };
    int x, index;

    for(x = 0; x < size; x++){
        index = 0;
        while(caesar[x][index] != '\0'){
            putchar(caesar[x][index]);
            index++;
        }
        putchar('\n');
    }
    return 0;
}