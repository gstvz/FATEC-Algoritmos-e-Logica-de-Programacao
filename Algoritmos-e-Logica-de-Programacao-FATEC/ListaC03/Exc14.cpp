/*
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares de 0 at� N em ordem decrescente.
*/

#include <iostream>

main() {
	int n;
	int x;
	
	printf("Insira um numero inteiro positivo par: \n");
	scanf("%d", &n);
	x = n;
	
	while(x >= 0) {
		if(x % 2 == 0) {
			printf("%d\n", x);
		};
		x--;
	};
};
