/*
Faca um algoritmo que leia um número positivo e imprima seus divisores.
*/

#include <iostream>

int main() {
    int n = 1, numero;

    scanf("%d", &numero);

    while(n <= numero) {
        if(numero % n == 0) {
            printf("Divisor: %d\n", n);
        };
        n++;
    };
};