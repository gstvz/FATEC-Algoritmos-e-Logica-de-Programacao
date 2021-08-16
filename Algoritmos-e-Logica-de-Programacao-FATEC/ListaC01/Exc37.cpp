/* 
Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
*/

#include <iostream>
#include <math.h>

main() {
	float valor, desconto, valorComDesconto;
	
	valor = 500.00;
	desconto = 0.88;
	valorComDesconto = valor * desconto;
	
	printf(" O produto de valor R$%.2f com 12 porcento de desconto passa a custar: R$%.2f", valor, valorComDesconto);
}
