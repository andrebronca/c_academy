#include <stdio.h>

int main(){
    struct president{
        char name[40];
        int year;
    } second = {    //declarando e inicializando
        "John Adams", 1797
    }, third = {
        "Thomas Jefferson", 1801
    };

    //inicializando uma struct
    struct president first = {
        "George Washington",
        1789
    };

    printf("The first president was %s\n", first.name);
    printf("He was inaugurated in %d\n", first.year);
    putchar('\n');
    printf("The second president was %s\n", second.name);
    printf("He was inaugurated in %d\n", second.year);
    putchar('\n');
    printf("The third president was %s\n", third.name);
    printf("He was inaugurated in %d\n", third.year);
    putchar('\n');
    
    return 0;
}