/*
Leia 10 n�meros e exiba na tela quantos s�o positivos, negativos ou nulos.
*/

#include <iostream>

main() {
	int x, numero, positivos, negativos, nulos;
	
	positivos = 0;
	negativos = 0;
	nulos = 0;
	x = 1;
	
	while(x <= 10) {
		printf("Insira um numero: \n");
		scanf("%d", &numero);
		
		if(numero > 0) {
			positivos++;
		} else if(numero < 0) {
			negativos++;
		} else {
			nulos++;
		};
		
		x++;
	};
	printf("Positivos> %d\n", positivos);
	printf("Negativos> %d\n", negativos);
	printf("Nulos> %d\n", nulos);
}
