/* Faça um programa que receba o salário base de um funcionário. 
Calcule e mostre o novo salário acordo com a tabela abaixo.
O desconto deve ser aplicado sobre o salário base e depois soma-se a gratificação. 
Salário base	 		desconto				Gratificação
até 1000,00					5%					R$ 130,00
de 1000,01 até 3000,00		6%					R$ 160,00
Acima de 3000,00			10%					R$ 200,00
*/

#include <iostream>

int main() {
	double salarioBase, salarioNovo, desconto, gratificacao;
	
	printf(" Informe o salario do funcionario: \n");
	scanf("%lf", &salarioBase);
	
	if (salarioBase <= 1000.00) {
		desconto = 5;
		gratificacao = 130;
		salarioNovo = (salarioBase * ((100 - desconto) / 100)) + gratificacao;
		printf(" Novo salario: %.2lf \n", salarioNovo);
	} else if (salarioBase > 1000.01 && salarioBase <= 3000.00) {
		desconto = 6;
		gratificacao = 160;
		salarioNovo = (salarioBase * ((100 - desconto) / 100)) + gratificacao;
		printf(" Novo salario: %.2lf \n", salarioNovo);
	} else if (salarioBase > 3000.01) {
		desconto = 10;
		gratificacao = 200;
		salarioNovo = (salarioBase * ((100 - desconto) / 100)) + gratificacao;
		printf(" Novo salario: %.2lf \n", salarioNovo);
	}
}
