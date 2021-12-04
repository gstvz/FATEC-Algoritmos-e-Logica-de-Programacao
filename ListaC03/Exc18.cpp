/*
Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e quantas vezes o maior número foi lido.
A quantidade de números a serem lidos deve ser fornecida pelo usuário.
*/

#include <iostream>

main() {
	int n;
	int numero;
	int maior = 0;
	int quantidade = 1;
	
	printf("Insira a quantidade de numeros a serem lidos: \n")	;
	scanf("%d", &n);
	
	while(n > 0) {
		printf("Insira um numero: \n")	;
		scanf("%d", &numero);
		
		if(numero > maior) {
			maior = numero;
			quantidade = 1;
		} else if(numero == maior) {
			quantidade++;	
		};
		n--;
	};
	
	printf("Maior: %d\n", maior);
	printf("Quantidade de vezes lido: %d\n", quantidade);
};
