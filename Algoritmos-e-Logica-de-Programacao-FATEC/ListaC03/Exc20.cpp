/*
Ler uma sequ�ncia de n�meros inteiros e determinar se eles s�o pares ou n�o.
Dever� ser informado o n�mero de dados lidos e n�mero de valores pares.
O processo termina quando for digitado o n�mero 1000.
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
