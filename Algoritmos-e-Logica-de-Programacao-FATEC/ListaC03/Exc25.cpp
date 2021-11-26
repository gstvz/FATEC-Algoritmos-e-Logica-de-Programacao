/*
Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
*/

#include <iostream>

int main() {
    int numero = 1000, soma = 0;

    while(numero > 0) {
        if(numero % 3 == 0 || numero % 5 == 0) {
            printf("Numero: %d\n", numero);
            soma += numero;
        };

        numero--;
    };

    printf("Soma: %d\n", soma);
};