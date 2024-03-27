#include <stdio.h>
#define T 4

fazer uma exibição do highscore
do maior para o menor
usar a função de ordenação, bubble sort já serve
pensei em fazer uma função separada, amanhã farei.


int main(){
    struct scores {
        char name[32];
        int score;
    };

    struct scores player[T];
    int x;

    for(x = 0; x < T; x++){
        printf("Enter player %d: ", x + 1);
        scanf("%s", player[x].name);
        printf("Enter their score: ");
        scanf("%d", &player[x].score);
    }

    puts("Player Info");
    printf("#\tName\tScore\n");
    for(x = 0; x < T; x++){
        printf("%d\t%s\t%5d\n",
            x + 1, player[x].name, player[x].score);
    }

    return 0;
}