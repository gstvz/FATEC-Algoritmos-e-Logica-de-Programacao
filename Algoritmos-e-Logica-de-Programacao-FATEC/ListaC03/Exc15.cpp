/*
Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os n�meros �mpares de 1 at� N em ordem crescente.
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
