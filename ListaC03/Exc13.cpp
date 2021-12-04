/*
Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.
*/

#include <iostream>

main() {
	int n;
	int x = 0;
	
	printf("Insira um numero inteiro positivo par: \n");
	scanf("%d", &n);	
	
	while(x <= n) {
		if(x % 2 == 0) {
			printf("%d\n", x);
		};
		x++;
	};
};
