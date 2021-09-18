#include <iostream>
#include <math.h>

int main() {
	double a, b, c, delta, R1, R2;
	printf(" Insira o valor de a: \n");
	scanf("%lf", &a);
	
	if (a == 0) {
		printf(" Nao e equacao de 2. Grau. \n");
	} else {
		printf(" Insira o valor de b: \n");
		scanf("%lf", &b);
		
		printf(" Insira o valor de c: \n");
		scanf("%lf", &c);
		
		delta = pow(b, 2) - (4 * a * c);
		
		if (delta < 0) {
			printf(" Nao ha Raizes Reais, Delta negativo. \n");
		} else if (delta == 0) {
			R1 = (-b + pow(delta, 0.5)) / (2 * a);
			printf(" %.4lf, Raiz unica. \n", R1);
		} else {
			R1 = (-b + pow(delta, 0.5)) / (2 * a);
			R2 = (-b - pow(delta, 0.5)) / (2 * a);
			printf(" 2 raizes reais (%.4lf, %.4lf). \n", R1, R2);
		}
	}
}
