#include <stdio.h>

int main(){
    struct player
    {
        char name[32];
        int highscore;
        int hours;
    } sony, nintendo;   //criando variáveis do tipo

    struct player xbox; //declaração de tipo separado

    puts("Xbox");
    printf("Enter the player's name: ");
    scanf("%s", xbox.name);
    printf("Enter their high score: ");
    scanf("%d", &xbox.highscore);
    printf("Enter the hour's played: ");
    scanf("%d", &xbox.hours);

    puts("Sony:");
    printf("Enter the player's name: ");
    scanf("%s", sony.name);
    printf("Enter their high score: ");
    scanf("%d", &sony.highscore);
    printf("Enter the hour's played: ");
    scanf("%d", &sony.hours);

    puts("Nintendo:");
    printf("Enter the player's name: ");
    scanf("%s", nintendo.name);
    printf("Enter their high score: ");
    scanf("%d", &nintendo.highscore);
    printf("Enter the hour's played: ");
    scanf("%d", &nintendo.hours);

    printf("Player %s has a high score of %d\n",
        xbox.name, xbox.highscore);
    printf("Player %s has a high score of %d\n",
        sony.name, sony.highscore);
    printf("Player %s has a high score of %d\n",
        nintendo.name, nintendo.highscore);

    return 0;
}