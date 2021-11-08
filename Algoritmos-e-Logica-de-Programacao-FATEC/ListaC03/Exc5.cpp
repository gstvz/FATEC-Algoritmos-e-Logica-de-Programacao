/*
Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

#include <iostream>

main() {
	int x = 0;
	int numero = 0;
	int soma = 0;
	
	while(x < 10) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		soma += numero;
		x++;
	};
	
	printf("Soma: %d", soma);
};
