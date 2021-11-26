/*
Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado, uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente média aritmética. O número de notas com que o aluno pretenda efetuar o cálculo não será fornecido ao programa, o qual terminará quando for
introduzido um valor que não seja válido como nota de aprovação.
*/

#include <iostream>

int main() {
    int notas = 0;
    float nota, media = 0;

    while(1) {
        scanf("%f", &nota);

        if(nota < 10 || nota > 20) {
            break;
        } else {
            media += nota;
            notas++;
        };
    };

    media = media / notas;

    printf("Media: %.2f\n", media);
};