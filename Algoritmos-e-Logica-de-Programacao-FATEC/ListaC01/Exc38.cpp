/* 
Leia o salário de um funcionário.
Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.
*/

#include <iostream>
#include <math.h>

main() {
	float salario, aumento, novoSalario;
	
	salario = 1100.00;
	aumento = 1.25;
	novoSalario = salario * aumento;
	
	printf(" O salario de R$%.2f com 25 porcento de aumento passa a ser: R$%.2f", salario, novoSalario);
}
