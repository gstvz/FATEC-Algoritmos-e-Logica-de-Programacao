#include <iostream>

int main() {
	int codigo, quantidade;
	double valor;
	
	scanf("%d %d", &codigo, &quantidade);
	
	if (codigo == 1) {
		valor = quantidade * 4.00;		
	} else if (codigo == 2) {
		valor = quantidade * 4.50;
	} else if (codigo == 3) {
		valor = quantidade * 5.00;
	} else if (codigo == 4) {
		valor = quantidade * 2.00;
	}
	
	printf("Total: R$ %.2lf", valor);
}
