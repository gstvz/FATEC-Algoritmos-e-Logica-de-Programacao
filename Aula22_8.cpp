/*
Faça um programa que gere uma tabela com os números de 1 a 10 e mostre o número, seu quadrado e cubo.
*/

#include <iostream>

main() {
	int x = 1;
	
	printf("Numero	Quadrado	Cubo\n");
	while(x <= 10) {		
		printf("%d	", x);
		printf("%d		", x * x);
		printf("%d\n", x * x * x);
		x += 1;
	};
};
