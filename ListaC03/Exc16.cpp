/*
Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os n�meros �mpares de 1 at� N em ordem decrescente.
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
