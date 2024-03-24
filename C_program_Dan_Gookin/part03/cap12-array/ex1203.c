#include <stdio.h>

int main(){
    int stock[] = {24164.95, 24107.08, 24643.63, 24400.93, 23728.53};

    puts("Stock Market Close");
    for(int i = 0; i < 5; i++ )
        printf("Day %d: %d\n", i + 1, stock[i]);

    return 0;
}