#include <iostream>

main() {
	int salarioBruto, desconto, salarioLiquido;
	
	printf(" Insira seu salario bruto: ");
	scanf("%i", &salarioBruto);
	
	printf(" Insira a porcentagem de desconto: ");
	scanf("%i", &desconto);
	
	desconto = salarioBruto * desconto / 100;
	
	salarioLiquido = salarioBruto - desconto;
	
	printf(" Salario Bruto: R$%i \n", salarioBruto);
	printf(" Imposto de renda: R$%i \n", desconto);
	printf(" Salario Liquido: R$%i", salarioLiquido);
}
