#include <stdio.h>
#include <ctype.h>

void main() {
  char frase[100], fraseModificada[100];
  int i;

  // Leitura da frase original
  printf("Digite uma frase: ");
  gets(frase);

  // Exibindo a frase original
  printf("\nFrase original: %s", frase);

  // Modificando a frase
  for (i = 0; frase[i] != '\0'; i++) {
    if (isupper(frase[i])) {
      fraseModificada[i] = tolower(frase[i]);
    } else if (islower(frase[i])) {
      fraseModificada[i] = toupper(frase[i]);
    } else {
      fraseModificada[i] = frase[i];
    }
  }
  fraseModificada[i] = '\0';

  // Exibindo a frase modificada
  printf("\nFrase modificada: %s", fraseModificada);
}
