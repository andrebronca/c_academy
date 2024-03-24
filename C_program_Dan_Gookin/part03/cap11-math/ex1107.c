#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main(){
    //const float amplitude = 10;
    float amplitude;
    const float wavelength = 0.1;
    float graph, s, x;

    printf("Informe a amplitude: ");
    scanf("%f", &amplitude);

    for(graph = 0; graph < M_PI; graph += wavelength){
        s = sin(graph);
        for(x = 0; x < s * amplitude; x++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}

/*
1 radians = 57.2957795 graus ou 360 / PI / 2
1 grau = 0.0174532925 radians, ou PI / 360 * 2
*/