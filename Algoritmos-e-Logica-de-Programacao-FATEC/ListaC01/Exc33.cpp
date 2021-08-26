/* 
Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

#include <iostream>
#include <math.h>

main() {
	int lado, area;
	
	printf(" Insira o valor do lado do quadrado: ");
	scanf("%i", &lado);

	area = lado * lado;
	
	printf(" O lado do quadrado e %i e sua area e: %i", lado, area);
}
