/*
Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros naturais �mpares.
*/

#include <iostream>

main() {
	int n = 0;
	int x = 0;
	
	printf("Insira um numero: \n");
	scanf("%d", &n);
	n *= 2;
	
	while(x < n) {
		if(x % 2 != 0) {
			printf("%d ", x);			
		};
		x++;
	};
};
