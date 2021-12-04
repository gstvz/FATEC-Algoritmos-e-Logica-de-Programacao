/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <iostream>

main() {
	int x = 0;
	int	numero = 0;
	int soma = 0;
	int media = 0;
	
	while(x < 10) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		soma += numero;
		x++;
	};
	
	media = soma / x;
	printf("Media: %d", media);
};
