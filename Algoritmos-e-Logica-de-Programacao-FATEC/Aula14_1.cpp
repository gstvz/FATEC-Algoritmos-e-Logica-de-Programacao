#include <iostream>

int main() {
	char cargo[20];
	int horasTrabalhadas;
	double imposto, valorHora, salarioBruto, salarioFinal;
	
	scanf("%s", &cargo);
	scanf("%d", &horasTrabalhadas);
	
	if(cargo[0] == 'B') {
		valorHora = 1500 * 0.02;		
	} else if (cargo[0] == 'V') {
		valorHora = 1800 * 0.02;
	} else if (cargo[0] == 'G'){
		valorHora = 2300 * 0.02;
	}
	
	salarioBruto = valorHora * horasTrabalhadas;
	
	if (salarioBruto <= 1000) {
		imposto = salarioBruto * 0.09;
	} else if (salarioBruto > 1000 && salarioBruto <= 5000) {
		imposto = salarioBruto * 0.10;
	} else {
		imposto = salarioBruto * 0.12;
	}	
	
	salarioFinal = salarioBruto - imposto;
	
	printf("Cargo Ocupado: %s\n", cargo);
	printf("Salario Bruto: %.2lf\n", salarioBruto);
	printf("Imposto Pago: %.2lf\n", imposto);
	printf("Salario a Receber: %.2lf", salarioFinal);
}
