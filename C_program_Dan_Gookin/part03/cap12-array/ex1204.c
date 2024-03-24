#include <stdio.h>

int main(){
    char sentence[] = "Random text";
    int index;
    index = 0;
    while(sentence[index] != '\0'){
        putchar(sentence[index]);
        index++;
    }
    puts("\n---------------- 1");
    index = 0;
    while(sentence[index] != '\0'){
        puts(sentence); //muito zuado
        index++;
    }
    puts("---------------- 2");
    index = 0;
    while(sentence[index] != '\0'){
        printf("%s\n", sentence);   //zuado, só acontece quando o array é char
        index++;
    }
    putchar('\n');

    return 0;
}