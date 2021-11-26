/*
Faça um programa que receba dois números. Calcule e mostre:
- a soma dos números pares desse intervalo de números, incluindo os números digitados;
- a multiplicação dos números ı́mpares desse intervalo, incluindo os digitados;
*/

#include <iostream>

int main() {
    int n = 1, n1, n2, soma = 0, produto = 1;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n1 > n2) {
        n = n2;

        while(n <= n1) {
            if(n % 2 == 0) {
                soma += n;
            } else {
                produto *= n;
            };

            n++;
        };
    } else {
        n = n1;

        while(n <= n2) {            
            if(n % 2 == 0) {
                soma += n;
            } else {
                produto *= n;
            };

            n++;
        };
    };

    printf("Soma dos pares: %d\n", soma);
    printf("Produto dos impares: %d\n", produto);
};