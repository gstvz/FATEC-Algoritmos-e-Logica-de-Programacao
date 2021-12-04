#include <iostream>

int main() {
	double custoFabrica, custoConsumidor;
	
	printf(" Informe o custo de fabrica: \n");
	scanf("%lf", &custoFabrica);
	
	if (custoFabrica <= 12000) {
		custoConsumidor = custoFabrica + (custoFabrica * 0.05);
		printf(" Custo ao consumidor: R$%.2lf. \n", custoConsumidor);
	} else if (custoFabrica > 12000 && custoFabrica <= 25000) {
		custoConsumidor = custoFabrica + (custoFabrica * 0.10) + (custoFabrica * 0.15);
		printf(" Custo ao consumidor: R$%.2lf. \n", custoConsumidor);
	} else {
		custoConsumidor = custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.20);
		printf(" Custo ao consumidor: R$%.2lf. \n", custoConsumidor);
	}
}
