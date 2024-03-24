#include <stdio.h>

int main(){
    char names1[16]; //15 char + \0 fim da string
    char names2[16]; 
    char names3[16]; 


    printf("What is your names 1? ");
    fgets(names1, 16, stdin);
    printf("Please to meet you, %s\n", names1);

    // printf("What is your names 2? ");
    // scanf("%s", names2);
    // printf("Please to meet you, %s\n", names2);
    
    // printf("What is your names 3? ");
    // scanf("%15s", names3);
    // printf("Please to meet you, %s\n", names3);



    return 0;
}