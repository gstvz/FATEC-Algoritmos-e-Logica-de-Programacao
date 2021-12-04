/* Fa�a um programa que receba o sal�rio base de um funcion�rio.
Calcule e mostre sal�rio a receber, o valor da gratifica��o e do imposto pagos.
Sabendo-se que esse funcion�rio tem gratifica��o e imposto (este s�o calculados cada um em cima do sal�rio base) conforme tabela abaixo:
Sal�rio						Gratifica��o					Imposto
at� 2000,00						10%							8%
de 2000,01 at� 8000,00			15%							9%
Acima de 8000,00				20%							11%
*/

#include <iostream>

int main() {
	double salarioBase, salarioNovo, gratificacao, imposto;
	
	printf(" Informe o salario base do funcionario: \n");
	scanf("%lf", &salarioBase);
	
	if (salarioBase <= 2000.00){
		gratificacao = (salarioBase * 10) / 100;
		imposto = (salarioBase * 8 ) / 100;
		salarioNovo = salarioBase - imposto + gratificacao;		
		printf(" Salario base: %.2lf. \n Gratificacao: %.2lf. \n Imposto: %.2lf. \n Salario a receber: %.2lf. \n", salarioBase, gratificacao, imposto, salarioNovo);
	} else if (salarioBase >= 2000.01 && salarioBase < 8000.00) {
		gratificacao = (salarioBase * 15) / 100;
		imposto = (salarioBase * 9) / 100;
		salarioNovo = salarioBase - imposto + gratificacao;		
		printf(" Salario base: %.2lf. \n Gratificacao: %.2lf. \n Imposto: %.2lf. \n Salario a receber: %.2lf. \n", salarioBase, gratificacao, imposto, salarioNovo);
	} else if (salarioBase >= 8000.00) {
		gratificacao = (salarioBase * 20) / 100;
		imposto = (salarioBase * 11) / 100;
		salarioNovo = salarioBase - imposto + gratificacao;		
		printf(" Salario base: %.2lf. \n Gratificacao: %.2lf. \n Imposto: %.2lf. \n Salario a receber: %.2lf. \n", salarioBase, gratificacao, imposto, salarioNovo);
	}
}

