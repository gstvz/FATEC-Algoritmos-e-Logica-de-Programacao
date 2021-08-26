/* 
Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
*/

#include <iostream>
#include <math.h>

main() {
	float valor, desconto, valorComDesconto;
	
	printf(" Insira o valor de um produto: ");
	scanf("%f", &valor);
	
	printf(" Insira a porcentagem de desconto: ");
	scanf("%f", &desconto);
		
	valorComDesconto = valor * (1 - (desconto/100));
	
	printf(" O produto de valor R$%.2f com %.2f porcento de desconto passa a custar: R$%.2f", valor, desconto, valorComDesconto);
}
