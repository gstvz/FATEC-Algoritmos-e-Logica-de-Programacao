/*
3) Desenvolva um programa que leia o valor de um veículo na fábrica, calcule os valores do IPI (tabela abaixo), do ICMS (tabela abaixo) e do preço final (valor de fábrica+IPI+ICMS):
Valor veiculo		IPI
1000				10%
1000,01 a 5000		30%
5000,01				40%

Valor veiculo		ICMS
2000				3%
2000,01 a 3000		15%
3000,01				20%
*/

#include <iostream>

main() {
	double veiculo, ipi, icms, final;
	
	printf("Insira o valor do veiculo: \n");
	scanf("%lf", &veiculo);
	
	if(veiculo <= 1000.00) {
		ipi = veiculo * 0.1;		
	} else if (veiculo <= 5000.00) {
		ipi = veiculo * 0.3;
	} else {
		ipi = veiculo * 0.4;
	};
	
	if (veiculo <= 2000.00) {
		icms = veiculo * 0.03;
	} else if (veiculo <= 3000.00) {
		icms = veiculo * 0.15;
	} else {
		icms = veiculo * 0.2;
	};
	
	final = veiculo + ipi + icms;
	
	printf("IPI: %.2lf\n", ipi);
	printf("ICMS: %.2lf\n", icms);
	printf("Final: %.2lf\n", final);
};
