#include <iostream>

int main() {
	double salarioAtual, salarioReajustado, salarioFinal;
	int tempoServico;
	
	printf(" Informe o salario atual: \n");
	scanf("%lf", &salarioAtual);
	
	printf(" Informe o tempo de servico em anos: \n");
	scanf("%d", &tempoServico);
	
	if (salarioAtual <= 500) {
		salarioReajustado = salarioAtual * 1.25;		
	} else if (salarioAtual > 500 && salarioAtual <= 1000) {
		salarioReajustado = salarioAtual * 1.20;
	} else if (salarioAtual > 1000 && salarioAtual <= 1500) {
		salarioReajustado = salarioAtual * 1.15;
	} else if (salarioAtual > 1500 && salarioAtual <= 2000) {
		salarioReajustado = salarioAtual * 1.10;
	} else {
		salarioReajustado = salarioAtual;
		printf(" Sem reajuste. \n");
	}
	
	if (tempoServico == 0) {
		salarioFinal = salarioReajustado;
		printf(" Sem bonus. \n Salario reajustado e: %.2lf. \n", salarioFinal);
	} else if (tempoServico >= 1 && tempoServico <= 3) {
		salarioFinal = salarioReajustado + 100;
		printf(" O salario reajustado e com bonus e: %.2lf. \n", salarioFinal);
	} else if (tempoServico >= 4 && tempoServico <= 6) {
		salarioFinal = salarioReajustado + 200;
		printf(" O salario reajustado e com bonus e: %.2lf. \n", salarioFinal);
	} else if (tempoServico >= 7 && tempoServico <= 10) {
		salarioFinal = salarioReajustado + 300;
		printf(" O salario reajustado e com bonus e: %.2lf. \n", salarioFinal);
	} else {
		salarioFinal = salarioReajustado + 500;
		printf(" O salario reajustado e com bonus e: %.2lf. \n", salarioFinal);
	}
}
