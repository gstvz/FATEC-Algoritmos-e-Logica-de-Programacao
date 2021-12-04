/*
Crie um programa que leia um n�mero que ser� o limite superior de um intervalo e o incremento.
Imprimir todos os n�meros naturais no intervalo de 0 at� esse n�mero.
Suponha que os dois n�meros lidos s�o maiores do que zero.
exemplo:	limite superior: 20
incremento: 5
sa�da: 0 5 10 15 20
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
