/*
Leia 5 números e exiba quantos são pares ou impares. Cuidado com as mensagens envolvidas.
*/

#include <iostream>

main() {
	int x, numero, par, impar;
	
	par = 0;
	impar = 0;
	x = 1;
	
	while(x <= 5) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		
		if(numero % 2 == 0) {
			par++;
		} else {
			impar++;
		};
		
		x++;
	};
	printf("Pares> %d\n", par);
	printf("Impares> %d\n", impar);
};
