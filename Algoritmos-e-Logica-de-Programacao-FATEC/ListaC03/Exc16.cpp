/*
Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até N em ordem decrescente.
*/

#include <iostream>

main() {
	int n;
	int x = 1;
	
	printf("Insira um numero inteiro positivo impar: \n");
	scanf("%d", &n);
	x = n;
	
	while(x >= 0) {
		if(x % 2 != 0) {
			printf("%d\n", x);			
		};
		x--;
	};	
};
