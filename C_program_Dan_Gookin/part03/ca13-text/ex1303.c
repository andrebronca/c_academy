#include <stdio.h>
#include <ctype.h>

int main(){
    char answer;
    printf("Would you like to blow up the moon? ");
    scanf("%c", &answer);
    answer = toupper(answer);
    if (answer == 'Y')
        puts("Boom!");
    else if (answer == 'N')
        puts("The moon is safe");
    else
        printf("The answare '%c' is not valid!", answer);
    
    return 0;
}