/*
Crie um programa que leia um n�mero que ser� o limite superior de um intervalo.
Imprimir todos os n�meros �mpares menores do que esse n�mero. 
exemplo: limite superior: 15
sa�da: 1 3 5 7 9 11 13
*/

#include <iostream>

main() {
	int limite;
	int x = 0;
	
	printf("Informe o limite superior: \n");
	scanf("%d", &limite);
	
	while(x <= limite) {
		if(x % 2 != 0 && x < limite) {
			printf("%d ", x);
		};		
		x++;
	};
};
