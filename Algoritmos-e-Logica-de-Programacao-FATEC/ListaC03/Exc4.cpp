/*
Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
*/

#include <iostream>

main() {
	int x = 0;	
	
	while(x <= 100000) {
		printf("%d ", x);
		x += 1000;
	};
};
