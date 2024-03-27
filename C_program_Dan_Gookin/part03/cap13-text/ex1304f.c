#include <stdio.h>

int main() {
  char frase[100];

  // Lendo a frase do usuário com gets()
  printf("Digite uma frase: ");
  gets(frase);

  // Imprimindo a frase do usuário
  printf("A frase que você digitou é: %s\n", frase);

  return 0;
}
