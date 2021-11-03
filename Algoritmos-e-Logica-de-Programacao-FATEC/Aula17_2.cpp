/*
2) Uma empresa contrata um encanador a R$ 50,00 por dia. 
Fa�a um programa que solicite o n�mero de dias trabalhados pelo encanador e a porcentagem do imposto cobrado. 
Imprima a quantia l�quida que dever� ser paga. 
Caso o valor l�quido a ser pago seja inferior ou igual a 1300, exibir "N�o h� tributa��o no Imposto de Renda", caso contr�rio exibir "Tributa��o no Imposto de Renda".
*/

#include <iostream>

main() {
	double encanador = 50.00;
	double imposto, porcentagem, bruto, liquido;	
	int dias = 0;	
	
	printf("Insira o numero de dias trabalhados: \n");
	scanf("%d", &dias);
	
	printf("Insira a porcentagem de imposto: \n");
	scanf("%lf", &porcentagem);
	
	bruto = encanador * dias;
	imposto = (bruto * porcentagem) / 100;
	liquido = bruto - imposto;
	
	printf("Dias trabalhados: %d\n", dias);
	printf("Imposto(%): %.2lf\n", porcentagem);
	printf("Quantia Liquida: %.2lf\n", liquido);
	if(liquido <= 1300.00) {
		printf("Situacao: Nao ha tributacao no Imposto de Renda");
	} else {
		printf("Situacao: Tributacao no Imposto de Renda");
	};
};
