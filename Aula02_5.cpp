#include <iostream>

main() {
	float provas, trabalhos, media;
	
	printf(" Qual a nota final das provas? ");
	scanf("%f", &provas);
	
	printf(" Qual a nota final dos trabalhos? ");
	scanf("%f", &trabalhos);
	
	media = (provas * 0.7) + (trabalhos * 0.3);
	printf(" A media final e: %.2f", media);
}
