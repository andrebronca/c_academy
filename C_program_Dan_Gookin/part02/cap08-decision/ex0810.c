#include <stdio.h>

int main(){
    int a, b, larger;

    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter different value B: ");
    scanf("%d", &b);

    //operador ternário
    //result = expression ? if_true : if_false
    larger = (a > b) ? a : b;
    printf("Value %d is larger. \n", larger);

    return 0;
}