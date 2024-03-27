#include <stdio.h>
#include <string.h>

#define F 40
#define S 20

int main(){
    char first[F];
    char last[S];

    printf("What is your first name? ");
    scanf("%s", first);
    printf("What is your last name? ");
    scanf("%s", last);
    
    strcat(first, " ");
    strcat(first, last);
    printf("Pleased to meet you, %s!\n", first);

    return 0;
}