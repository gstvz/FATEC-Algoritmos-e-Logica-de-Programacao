#include <iostream>

int main() {
	char sexo[1];
	double altura, peso, pesoIdeal, pesoPerder, porcentagem;
	
	printf("Informe sua altura: \n");
	scanf("%lf", &altura);
	
	printf("Informe seu sexo, M para masculino - F para feminino: \n");
	scanf("%s", &sexo);
	
	printf("Informe seu peso: \n");
	scanf("%lf", &peso);
	
	if (sexo[0] == 'M') {
		pesoIdeal = (72.7 * altura) - 58;
		pesoPerder = peso - pesoIdeal;
		porcentagem = (pesoPerder * 100) / peso;
		printf("Peso ideal Homem: %.2lf\nEmagrecer (%): %.2lf\n", pesoIdeal, porcentagem);
	} else if (sexo[0] == 'F') {
		pesoIdeal = (62.1 * altura) - 44.7;
		porcentagem = (pesoPerder * 100) / peso;
		printf("Peso ideal Mulher: %.2lf\nEmagrecer (%): %.2lf\n", pesoIdeal, porcentagem);
	}	
}


