#include <stdio.h>

#define T 30

int main() {
  int array[T];
  int i;

  // Preenchendo o array com valores
  for (i = 0; i < T; i++) {
    array[i] = i;
  }

  // Imprimindo os valores do array
  for (i = 0; i < T; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
