#include <stdio.h>

int main(){
    char firstname[15];
    int idade;
    printf("Type your first name: ");
    scanf("%s", firstname);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Pleased to meed you, %s. \n", firstname);
    printf("Sua idade é: %d \n", idade);
    return 0;
}