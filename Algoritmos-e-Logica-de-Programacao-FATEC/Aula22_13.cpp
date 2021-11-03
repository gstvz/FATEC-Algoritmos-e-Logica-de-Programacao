/*
Dados 5 números exiba qual o maior e o menor números foram digitados.
*/

#include <iostream>

main() {
	int x, menor, maior, numero;
	
	x = 1;
	
	while(x <= 5) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		if(x == 1) {
			maior = numero;
			menor = numero;
		} else if(numero > maior) {
			maior = numero;
		} else {
			menor = numero;
		};
		
		x++;
	};
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
}
