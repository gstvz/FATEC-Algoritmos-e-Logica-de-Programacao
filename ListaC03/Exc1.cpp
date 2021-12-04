/*
Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
*/

#include <iostream>

main() {
	int x;
	x = 3;
	
	while(x <= 15) {
		printf("%d ", x);
		x += 3;
	};
};
