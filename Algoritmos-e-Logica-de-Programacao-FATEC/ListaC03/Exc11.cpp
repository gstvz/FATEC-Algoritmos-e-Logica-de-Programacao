/*
Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem crescente.
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
