/* 
Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base.
Além disso, ele paga 7% de imposto sobre o salário-base.
*/

#include <iostream>
#include <math.h>

main() {
	float salarioBase, salarioFinal, gratificacao, imposto;
	
	gratificacao = 1.05;
	imposto = 0.93;
	
	printf(" Insira o seu salario base em reais: ");
	scanf("%f", &salarioBase);

	salarioFinal = (salarioBase * gratificacao) * imposto;
	printf(" O salario a receber, acrescido de 5 porcento de gratificacao, e com desconto de 7 porcento de imposto e: %.2f", salarioFinal);
}
