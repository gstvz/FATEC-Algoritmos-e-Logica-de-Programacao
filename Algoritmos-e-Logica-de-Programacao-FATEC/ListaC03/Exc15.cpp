/*
Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até N em ordem crescente.
*/

#include <iostream>

main() {
	int n;
	int x = 1;
	
	printf("Insira um numero inteiro positivo impar: \n");
	scanf("%d", &n);
	
	while(x <= n) {
		if(x % 2 != 0) {
			printf("%d\n", x);			
		};
		x++;
	};
};
