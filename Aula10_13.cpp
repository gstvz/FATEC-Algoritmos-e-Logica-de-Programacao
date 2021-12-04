/* Elabore um algoritmo que calcule e escreva o sal�rio de um determinado oper�rio de uma f�brica de pe�as automotivas. 
Sabe-se que o sal�rio do funcion�rio � calculado da seguinte forma: Sal�rio final = sal�rio fixo + comiss�o.
O sal�rio fixo dever� ser lido pelo teclado e a comiss�o calculada de acordo com a quantidade de pe�as produzidas (tamb�m lidas) durante o m�s pelo funcion�rio:
* se o total de pe�as < 50 unidades/m�s ent�o comiss�o = 0.
* se total de pe�as >= 50 e < 70 ent�o a comiss�o = 10% sobre o sal�rio fixo.
* se total de pe�as >= 70 e < 80 ent�o a comiss�o = 15% sobre o sal�rio fixo.
* se total de pe�as >= 80 ent�o a comiss�o = 20% sobre o sal�rio fixo.
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
