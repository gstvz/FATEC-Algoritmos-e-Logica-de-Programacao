/*
Ler uma sequência de números inteiros e determinar se eles são pares ou não.
Deverá ser informado o número de dados lidos e número de valores pares.
O processo termina quando for digitado o número 1000.
*/

#include <iostream>

main() {
	int numero;
	int numeros = 0;
	int pares = 0;
	
	while(numero != 1000) {
		
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		
		if(numero == 1000) {
			break;
		};
		
		if(numero % 2 == 0)	 {
			pares++;
		};
		
		numeros++;
	};
	
	printf("Numeros lidos: %d\n", numeros);
	printf("Numeros pares: %d\n", pares);
};
