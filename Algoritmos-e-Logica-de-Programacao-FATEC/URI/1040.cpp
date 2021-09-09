#include <iostream>

int main() {
	
	double N1, N2 ,N3, N4, media, exame;
	
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1);
	printf("Media: %.1lf\n", media);
	
	if (media >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if(media >= 5.0 && media <= 6.9) {
		printf("Aluno em exame.\n");
		scanf("%lf", &exame);
		printf("Nota do exame: %.1lf\n", exame);
		media = (media + exame) / 2;
		if (media >= 5.0) {
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", media);
		} else {
			printf("Aluno reprovado.\n");
		}
	} else if (media < 5.0) {
		printf("Aluno reprovado.\n");
	}
	
}
