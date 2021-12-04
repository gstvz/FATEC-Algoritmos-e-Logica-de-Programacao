/* Elabore um algoritmo que calcule e escreva o salário de um determinado operário de uma fábrica de peças automotivas. 
Sabe-se que o salário do funcionário é calculado da seguinte forma: Salário final = salário fixo + comissão.
O salário fixo deverá ser lido pelo teclado e a comissão calculada de acordo com a quantidade de peças produzidas (também lidas) durante o mês pelo funcionário:
* se o total de peças < 50 unidades/mês então comissão = 0.
* se total de peças >= 50 e < 70 então a comissão = 10% sobre o salário fixo.
* se total de peças >= 70 e < 80 então a comissão = 15% sobre o salário fixo.
* se total de peças >= 80 então a comissão = 20% sobre o salário fixo.
*/

#include <iostream>

int main() {
	int pecas;
	double salarioFixo, comissao, salarioFinal;
	
	printf(" Informe a quantidade de pecas produzidas: \n");
	scanf("%d", &pecas);
	
	printf(" Informe o salario fixo: \n");
	scanf("%lf", &salarioFixo);
	
	if (pecas < 50) {
		comissao = 0;
		salarioFinal = salarioFixo;
		printf(" O Salario final com %.2lf porcento de comissao e: R$%.2lf", comissao, salarioFinal);
	} else if (pecas >= 50 && pecas < 70) {
		comissao = 10;
		salarioFinal = salarioFixo * (1 + (comissao / 100) );
		printf(" O Salario final com %.2lf porcento de comissao e: R$%.2lf", comissao, salarioFinal);
	} else if (pecas >= 70 && pecas < 80) {
		comissao = 15;
		salarioFinal = salarioFixo * (1 + (comissao / 100));
		printf(" O Salario final com %.2lf porcento de comissao e: R$%.2lf", comissao, salarioFinal);
	} else {
		comissao = 20;
		salarioFinal = salarioFixo * (1 + (comissao / 100));
		printf(" O Salario final com %.2lf porcento de comissao e: R$%.2lf", comissao, salarioFinal);
	}
}
