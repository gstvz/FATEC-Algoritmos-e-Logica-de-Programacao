/* 
Receba o sal�rio-base de um funcion�rio. Calcule e imprima o sal�rio a receber, sabendo-se que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base.
Al�m disso, ele paga 7% de imposto sobre o sal�rio-base.
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
