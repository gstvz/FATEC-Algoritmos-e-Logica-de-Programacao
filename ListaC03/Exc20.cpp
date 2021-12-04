/* Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina
quando for digitado o número 1000. */


#include <iostream>

int main() {
    int n, numeros = 0, pares = 0;

    while(1) {
        scanf("%d", &n);

        if(n == 1000) {
            break;
        } else {
            if(n % 2 == 0) {
                pares++;
            };
            numeros++;
        };
    };

    printf("Numeros lidos: %d\n", numeros);
    printf("Numeros pares: %d\n", pares);
};