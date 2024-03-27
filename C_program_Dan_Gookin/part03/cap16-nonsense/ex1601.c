#include <stdio.h>

int main(){
    int a, b;
    float c;

    printf("Input the first value: ");
    scanf("%d", &a);
    printf("Input the second value: ");
    scanf("%d", &b);
    //int / int retorna int
    c = (float) a / (float) b;      //typecast
    printf("%d/%d = %.2f\n", a, b, c);

    return 0;
}