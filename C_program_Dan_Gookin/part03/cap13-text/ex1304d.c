#include <stdio.h>
#include <stdlib.h>

#define T 30

int main() {
  int *array;
  int i;

  // Alocando memória para o array usando a constante T
  array = (int *)malloc(sizeof(int) * T);

  // Preenchendo o array com valores
  for (i = 0; i < T; i++) {
    array[i] = i;
  }

  // Imprimindo os valores do array
  for (i = 0; i < T; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  // Liberando a memória alocada para o array
  free(array);

  return 0;
}
