/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

#include <iostream>

main() {
	int x = 0;
	int numero = 0;
	int maior = 0;
	int menor = 0;
	
	while(x < 10) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		
		if(x == 0) {
			maior = numero;
			menor = numero;
		};
				
		if(numero > maior) {
			maior = numero;
		} else if (numero < menor) {
			menor = numero;
		};
		
		x++;
	};
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
};
