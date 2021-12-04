/*
Dado um número inteiro exibir a tabuada deste número.
*/

#include <iostream>

main() {
	int x, aux;
	aux = 0;
	
	printf("Insira um numero: \n");
	scanf("%d", &x);
	
	while(aux <= 10) {
		int resultado = x * aux;		
		printf("%d x %d = %d \n", x, aux, resultado);
		aux++;
	}
}
