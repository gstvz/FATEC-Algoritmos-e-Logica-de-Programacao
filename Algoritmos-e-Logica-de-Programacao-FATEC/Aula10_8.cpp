// Desenvolva um algoritmo que leia um número inteiro e exiba na tela se o mesmo é par ou impar.

#include <iostream>

int main() {
	int numero;
	printf(" Insira um numero: \n");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf(" O numero %d e par. \n", numero);
	} else {
		printf(" O numero %d e impar. \n", numero);
	}
}
