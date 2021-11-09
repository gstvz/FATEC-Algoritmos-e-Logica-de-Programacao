/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
*/

#include <iostream>

main() {
	int n;
	int x = 0;
	
	printf("Insira um numero inteiro positivo: \n");
	scanf("%d", &n);
	
	while(x <= n) {
		printf("%d\n", x);
		x++;
	};
};
