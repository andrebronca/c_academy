#include <stdio.h>
#define T 4

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

    puts("Ordem decrescente de pontuacao");
    int e, i;
    struct scores temp;
    for(e = 0; e < T - 1; e++){
        for(i = e + 1; i < T; i++){
            if (player[e].score < player[i].score){
                temp = player[e];
                player[e] = player[i];
                player[i] = temp;
            }
        }
    }
    printf("#\tName\tScore\n");
    for(x = 0; x < T; x++){
        printf("%d\t%s\t%5d\n",
            x + 1, player[x].name, player[x].score);
    }


    return 0;
}