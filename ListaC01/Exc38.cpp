/* 
Leia o salário de um funcionário.
Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.
*/

#include <iostream>
#include <math.h>

main() {
	float salario, aumento, novoSalario;
	
	printf(" Insira o valor do salario: ");
	scanf("%f", &salario);
	
	printf(" Insira a porcentagem do aumento: ");
	scanf("%f", &aumento);	

	novoSalario = salario * (1 + (aumento/100));
	
	printf(" O salario de R$%.2f com %.2f porcento de aumento passa a ser: R$%.2f", salario, aumento, novoSalario);
}
