/* 
Faça um programa que leia um numero inteiro positivo de tres digitos (de 100 a 999).
Gere outro numero formado pelos digitos invertidos do numero lido.
*/

#include <iostream>
#include <math.h>

main() {
	int numeroEntrada = 592, numeroInvertido = 0, ultimo;
	
	ultimo = numeroEntrada % 10;
	numeroInvertido = numeroInvertido * 10 + ultimo;
	numeroEntrada = numeroEntrada / 10;
	ultimo = numeroEntrada % 10;
	numeroInvertido = numeroInvertido * 10 + ultimo;
	numeroEntrada = numeroEntrada / 10;	
	numeroInvertido = numeroInvertido * 10 + numeroEntrada;
	
	printf(" O numero 592 invertido e: %i ", numeroInvertido);
}
