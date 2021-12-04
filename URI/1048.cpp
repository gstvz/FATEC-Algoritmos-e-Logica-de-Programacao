#include <iostream>

int main() {
	float salario, reajuste, novoSalario;
	
	scanf("%f", &salario);

	if (salario <= 400) {
		reajuste = salario * 0.15;
		novoSalario = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", novoSalario, reajuste);
	} else if (salario > 400 && salario <= 800) {
		reajuste = salario * 0.12;
		novoSalario = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", novoSalario, reajuste);
	} else if (salario > 800 && salario <= 1200) {
		reajuste = salario * 0.10;
		novoSalario = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", novoSalario, reajuste);
	} else if (salario > 1200 && salario <= 2000) {
		reajuste = salario * 0.07;
		novoSalario = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", novoSalario, reajuste);
	} else {
		reajuste = salario * 0.04;
		novoSalario = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", novoSalario, reajuste);
	}
	
	return 0;
}
