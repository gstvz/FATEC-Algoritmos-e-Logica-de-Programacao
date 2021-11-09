/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
*/

#include <iostream>

main() {
	int n;
	int x;
	
	printf("Insira um numero inteiro positivo: \n");
	scanf("%d", &n);
	x = n;
	
	while(x >= 0) {
		printf("%d\n", x);
		x--;
	};
};
