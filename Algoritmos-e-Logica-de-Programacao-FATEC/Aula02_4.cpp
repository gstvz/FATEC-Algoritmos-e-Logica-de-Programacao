#include <iostream>
#include <math.h>

main() {
    float raio, volume;    

    printf(" Qual o valor do raio? ");
    scanf("%f", &raio);

    volume = (4 * M_PI * (pow(raio, 2))) / 3;
    printf(" O volume e: %.2f", volume);
}

