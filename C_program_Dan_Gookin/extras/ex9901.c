#include <stdio.h>
#include <math.h>

void main() {
  // Definindo as constantes
  const float raio = 100.0;
  const float angulo_inicial = 0.0;
  const float angulo_final = 2 * 3.14159;
  const float angulo_terco = angulo_final / 3.0;

  // Definindo as variáveis
  float angulo_atual;
  float x, y;

  // Começando o desenho
  printf("M %f %f\n", raio * cos(angulo_inicial), raio * sin(angulo_inicial));

  // Desenhando a primeira parte do círculo
  for (angulo_atual = angulo_inicial; angulo_atual < angulo_terco; angulo_atual += 0.01) {
    x = raio * cos(angulo_atual);
    y = raio * sin(angulo_atual);
    printf("L %f %f\n", x, y);
  }

  // Desenhando a segunda parte do círculo
  for (angulo_atual = angulo_terco; angulo_atual < 2 * angulo_terco; angulo_atual += 0.01) {
    x = raio * cos(angulo_atual);
    y = raio * sin(angulo_atual);
    printf("L %f %f\n", x, y);
  }

  // Desenhando a terceira parte do círculo
  for (angulo_atual = 2 * angulo_terco; angulo_atual < angulo_final; angulo_atual += 0.01) {
    x = raio * cos(angulo_atual);
    y = raio * sin(angulo_atual);
    printf("L %f %f\n", x, y);
  }

  // Finalizando o desenho
  printf("Z\n");
}
