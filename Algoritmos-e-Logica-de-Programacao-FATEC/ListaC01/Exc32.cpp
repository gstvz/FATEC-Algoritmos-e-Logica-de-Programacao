/* 
Leia um número inteiro e imprima a soma do seu sucessor de seu triplo com o antecessor de seu dobro.
*/

#include <iostream>
#include <math.h>

main() {
	int numero, antecessorDobro, sucessorTriplo, soma;
	
	numero = 5;
	antecessorDobro = numero * 2 - 1;
	sucessorTriplo = numero * 3 + 1;
	soma = antecessorDobro + sucessorTriplo;
	
	printf(" O numero %i tem como antecessor do seu dobro %i e como sucessor do seu triplo %i \n", numero, antecessorDobro, sucessorTriplo);
	printf(" A soma deles e: %i", soma);
}
