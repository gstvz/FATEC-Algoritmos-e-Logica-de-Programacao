/*
Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.
*/

#include <iostream>

main() {
	int x = 0;
	int numero = 0;
	int numeros = 0;
	int soma = 0;
	int media = 0;
	
	while(x < 10) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		
		if(numero > 0) {
			soma += numero;
			numeros++;
		};
		
		x++;
	};
	
	media = soma / numeros;
	printf("Media: %d", media);
};
