/*
Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem decrescente.
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
