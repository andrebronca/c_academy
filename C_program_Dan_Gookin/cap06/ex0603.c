#include <stdio.h>

int main(){
    unsigned int ono;
    ono = -10;  //irá ocorrer o transbordamento
    printf("The value of ono is %u.\n", ono);
    return 0;

    /*
    TYPE                VALUE RANGE                         PRINTF() CONVERSION CHARACTER
    -------------------------------------------------------------------------------------
    _Bool               0 to 1                              %d
    char                -128 to 127                         %c
    unsigned char       0 to 255                            %u
    short int           -32,768 to 32,767                   %d
    unsigned short int  0 to 65,535                         %u
    int                 -2,147,483,648 to 2,147,483,647     %d
    unsigned int        0 to 4,294,967,295                  %u
    long int            -2,147,483,648 to 2,147,483,647     %ld
    unsigned long int   0 to 4,294,967,295                  %lu
    float               1.17x10^-38 to 3.40x10^38           %f
    double              2.22x10^-308 to 1.79x10^308         %f
    */
}