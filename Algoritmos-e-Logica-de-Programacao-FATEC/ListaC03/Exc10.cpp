/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <iostream>

main() {
	int x = 0;
	int soma = 0;
	
	while(x < 100) {
		if(x % 2 == 0) {
			soma += x;
		};
		x++;
	};
	
	printf("Soma: %d\n", soma);
};
