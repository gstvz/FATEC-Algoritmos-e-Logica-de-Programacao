#include <iostream>

int main() {
	int dispositivo, estado;
	double desktop, notebook, mg, sp ,rj, valor;
	
	desktop = 1900;
	notebook = 3600;	
	mg = 1.10;
	sp = 1.12;
	rj = 1.15;
	
	printf("1 para desktop - 2 para notebook: \n");
	scanf("%d", &dispositivo);
	printf("1 para MG - 2 para SP - 3 para RJ: \n");
	scanf("%d", &estado);
	
	if (dispositivo == 1) {
		valor = desktop;
	} else if (dispositivo == 2) {
		valor = notebook;
	}
	
	if (estado == 1) {
		valor *= mg;
	} else if (estado == 2) {
		valor *= sp;
	} else if (estado == 3) {
		valor *= rj;
	}
	
	if (dispositivo > 2) {
		printf("Opcao de equipamento incorreta.\n");
	} else if (estado > 3) {
		printf("Opcao de Estado incorreta.\n");
	} else {
		printf("Valor entrega: %.2lf\n", valor);
	}	
}
