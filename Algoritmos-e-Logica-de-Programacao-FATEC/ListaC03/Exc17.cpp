/*
Fa�a um programa que leia um n�mero inteiro positivo n e calcule a soma dos n primeiros n�meros naturais.
*/

#include <iostream>

main() {
	int n;
	int soma = 0;
	
	printf("Insira um numero inteiro positivo: \n");
	scanf("%d", &n);
	
	while(n > 0) {
		soma += n;		
		n--;
	};
	
	printf("Soma: %d\n", soma);
};
