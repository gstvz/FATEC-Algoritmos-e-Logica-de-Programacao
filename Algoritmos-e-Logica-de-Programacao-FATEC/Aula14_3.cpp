#include <iostream>

int main() {
	double n1, n2, n3, media;	
	
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	
	n1 *= 3;
	n2 *= 4;
	n3 *= 3;
	
	media = (n1 + n2 + n3) / 10;
	
	if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
		printf("Erro: entrada de dados\n");
	} else if (media <= 2.9) {
		printf("Media: %.2lf\n", media);
		printf("Situacao: reprovado\n");
	} else if (media >= 3 && media <= 4.9) {
		printf("Media: %.2lf\n", media);
		printf("Situacao: recuperacao\n");
	} else {
		printf("Media: %.2lf\n", media);
		printf("Situacao: aprovado\n");
	}
}
