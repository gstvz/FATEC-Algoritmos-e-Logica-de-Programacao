/*
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares de 0 at� N em ordem crescente.
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
