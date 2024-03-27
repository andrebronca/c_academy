#include <ctype.h>
#include <stdio.h>

int main(){
    char phrase[] = "When in the Course of human events, it becomes \
necessary for one people to dissolve the political bands \
which have connected them with another, and to assume \
among the power of the earth, the separate and equal \
station to which the Laws of Nature and of Nature's God \
entitle them, a decent respect to the opinions of mankind \
requires that they should declare the causes which impel \
them to the separation.";
    
    int index, alpha, space, punct, upper, lower, total;
    index = alpha = space = punct = upper = lower = total = 0;

    /* gather data */
    while (phrase[index]){
        if (isalpha(phrase[index])) alpha++;
        if (isspace(phrase[index])) space++;
        if (ispunct(phrase[index])) punct++;
        if (isupper(phrase[index])) upper++;
        if (islower(phrase[index])) lower++;
        index++;
    }
    total += alpha + space + punct + upper + lower;

    /* print results */
    printf("\"%s\"\n", phrase);
    puts("Statistics:");
    //justificando à direita com padding 4 na esquerda
    printf("%4d alphabetic characters\n", alpha);
    printf("%4d spaces\n", space);
    printf("%4d punctuation symbols\n", punct);
    //justificando à esquerda com padding 4 na direita
    printf("%-4d lower characteres\n", lower);
    printf("%-4d upper characteres\n", upper);
    printf("%-4d total de caracteres\n", total);

    return 0;
}
