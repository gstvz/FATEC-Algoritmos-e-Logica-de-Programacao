/* 
Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.
*/

#include <iostream>
#include <math.h>

main() {
	char letraMaiuscula, letraMinuscula;
	
	printf(" Insira uma letra maiuscula: ");
	scanf("%c", &letraMaiuscula);
	letraMinuscula = letraMaiuscula + 32;
	
	printf(" A letra %c minuscula e: %c", letraMaiuscula, letraMinuscula);
}
