#include <stdio.h>

void half(void);
void twice(void);

//external variable
int age;
//external variable
float feet;

int main(){
    printf("How old are you: ");
    scanf("%d", &age);
    printf("How tall areyou (in feet): ");
    scanf("%f", &feet);
    printf("You are %d years old and %.1f feet tall.\n", 
        age, feet);
    half();
    twice();
    printf("But you're not really %d years old or %.1f feet tall.\n", 
        age, feet);
    
    return 0;
}

void half(void){
    float a, h;
    a = (float) age / 2.0;
    printf("Half your age is %.1f.\n", a);
    h = feet / 2.0;
    printf("Half your height is %.1f.\n", h);
}

void twice(void){
    age *= 2;
    printf("Twice your age is %d.\n", age);
    feet *= 2;
    printf("Twice your height is %d.\n", age);
}