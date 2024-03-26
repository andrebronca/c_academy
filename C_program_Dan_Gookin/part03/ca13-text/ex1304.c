#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[30];
    char modificado[30];
    int index;

    printf("Escreva uma frase usando letras maiusculas e minusculas: ");
    fgets(frase, 30, stdin);
    
    index = 0;
    while(frase[index] != '\0'){
        if (islower(frase[index])) modificado[index] = toupper(frase[index]);
        if (isupper(frase[index])) modificado[index] = tolower(frase[index]);
        if (ispunct(frase[index])) modificado[index] = frase[index];
        if (isspace(frase[index])) modificado[index] = frase[index];
        if (isgraph(frase[index])) {
            modificado[index + 1] = '\0';
            break;
        } 
        //if (frase[index + 1] == '\0') modificado[index + 1] = '\0';
        index++;
    }
    
    
    printf("Original: %s", frase);
    printf("Modified: %s", modificado);
    putchar('\n');
    for(int i = 0; i < 30; i++){
        printf("%c ", modificado[i]);
    }

    putchar('\n');
    for(int i = 0; i < 30; i++){
        printf("%c ", frase[i]);
    }

    return 0;
}
