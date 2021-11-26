/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio.
Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <iostream>

int main() {
    int n = 1, numero, soma = 0;

    scanf("%d", &numero);

    while(n < numero) {
        if(numero % n == 0) {
            soma += n;
        };

        n++;
    };

    printf("Soma dos divisores de %d: %d\n", numero, soma);
};