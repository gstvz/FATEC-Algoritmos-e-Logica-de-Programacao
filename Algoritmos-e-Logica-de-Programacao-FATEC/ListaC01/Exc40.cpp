/* 
Uma empresa contrata um encanador a R$30,00 por dia.
Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% pelo imposto de renda.
*/

#include <iostream>
#include <math.h>

main() {
	float valor, imposto, pagamento;
	int dias;
	
	valor = 30.00;
	imposto = 0.92;
	
	printf(" Servico de encanador: R$%.2f por dia. \n", valor);
	printf(" Quantos dias durara o servico? ");
	scanf("%i", &dias);
	
	pagamento = valor * dias * imposto;
	
	printf(" O valor do servico sera de R$%.2f, por %i dias trabalhados, ja descontados 8 porcento do imposto de renda", pagamento, dias);
}
