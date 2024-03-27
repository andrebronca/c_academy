#include <SDL.h>

int main() {
  // Inicializando a SDL
  SDL_Init(SDL_INIT_VIDEO);

  // Criando uma janela
  SDL_Window* window = SDL_CreateWindow("Círculo Dividido", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);

  // Criando um renderizador
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  // Definindo as cores
  SDL_Color vermelho = {255, 0, 0, 255};
  SDL_Color verde = {0, 255, 0, 255};
  SDL_Color azul = {0, 0, 255, 255};

  // Definindo as constantes
  const float raio = 100.0;
  const float angulo_inicial = 0.0;
  const float angulo_final = 2 * M_PI;
  const float angulo_terco = angulo_final / 3.0;

  // Desenhando a primeira parte do círculo
  SDL_SetRenderDrawColor(renderer, vermelho);
  for (float angulo_atual = angulo_inicial; angulo_atual < angulo_terco; angulo_atual += 0.01) {
    float x = raio * cos(angulo_atual);
    float y = raio * sin(angulo_atual);
    SDL_RenderDrawPoint(renderer, (int)x, (int)y);
  }

  // Desenhando a segunda parte do círculo
  SDL_SetRenderDrawColor(renderer, verde);
  for (float angulo_atual = angulo_terco; angulo_atual < 2 * angulo_terco; angulo_atual += 0.01) {
    float x = raio * cos(angulo_atual);
    float y = raio * sin(angulo_atual);
    SDL_RenderDrawPoint(renderer, (int)x, (int)y);
  }

  // Desenhando a terceira parte do círculo
  SDL_SetRenderDrawColor(renderer, azul);
  for (float angulo_atual = 2 * angulo_terco; angulo_atual < angulo_final; angulo_atual += 0.01) {
    float x = raio * cos(angulo_atual);
    float y = raio * sin(angulo_atual);
    SDL_RenderDrawPoint(renderer, (int)x, (int)y);
  }

  // Atualizando a tela
  SDL_RenderPresent(renderer);

  // Aguardando o usuário pressionar uma tecla
  SDL_Event event;
  while (SDL_WaitEvent(&event) && event.type != SDL_QUIT) {}

  // Fechando a SDL
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
