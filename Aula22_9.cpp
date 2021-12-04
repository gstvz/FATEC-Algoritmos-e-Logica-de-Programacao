/*
Crie um programa que leia um número que será o limite superior de um intervalo e o incremento.
Imprimir todos os números naturais no intervalo de 0 até esse número.
Suponha que os dois números lidos são maiores do que zero.
exemplo:	limite superior: 20
incremento: 5
saída: 0 5 10 15 20
*/

#include <iostream>

main() {
	int limite, incremento;
	int x = 0;
	
	printf("Informe o limite superior: \n");
	scanf("%d", &limite);
	
	printf("Informe o incremento: \n");
	scanf("%d", &incremento);
	
	while(x <= limite) {
		printf("%d ", x);
		x += incremento;
	};
};
