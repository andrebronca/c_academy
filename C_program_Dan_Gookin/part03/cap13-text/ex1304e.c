#include <stdio.h>

int main() {
  char nome[50];

  // Lendo o nome do usuário com scanf()
  printf("Digite seu nome: ");
  scanf("%s", nome);

  // Imprimindo o nome do usuário
  printf("Seu nome é: %s\n", nome);

  return 0;
}
