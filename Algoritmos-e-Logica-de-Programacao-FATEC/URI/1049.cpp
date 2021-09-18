#include <iostream>

int main() {
	char tipo[20], classe[20], alimentacao[20];
	
	scanf("%s", &tipo);
	scanf("%s", &classe);
	scanf("%s", &alimentacao);
	
	if (tipo[0] == 'v') {
		if (classe[0] == 'a') {
			if (alimentacao[0] == 'c') {
				printf("aguia\n");
			} else if (alimentacao[0] == 'o') {
				printf("pomba\n");
			}
		} else if (classe[0] == 'm') {
			if (alimentacao[0] == 'o') {
				printf("homem\n");
			} else if (alimentacao[0] == 'h') {
				printf("vaca\n");
			}
		} 
	} else if (tipo[0] == 'i') {
		if (classe[0] == 'i') {
			if (alimentacao[2] == 'm') {
				printf("pulga\n");
			} else if (alimentacao[2] == 'r') {
				printf("lagarta\n");
			}
		} else if (classe[0] == 'a') {
			if (alimentacao[0] == 'h') {
				printf("sanguessuga\n");
			} else if (alimentacao[0] == 'o') {
				printf("minhoca\n");
			}
		} 
	}
	
	return 0;
}
