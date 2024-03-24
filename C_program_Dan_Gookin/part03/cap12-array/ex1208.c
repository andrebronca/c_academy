#include <stdio.h>

int main(){
    char tictactoe[3][3];
    int x, y;

    /* initialize matrix */
    for(x = 0; x < 3; x++)
        for(y = 0; y < 3; y++)
            tictactoe[x][y] = '.';
    tictactoe[1][1] = 'X';

    return 0;
}