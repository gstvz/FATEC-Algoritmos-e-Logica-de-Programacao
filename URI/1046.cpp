#include <iostream>
 
using namespace std;
 
int main() {
 
	int horaInicio, horaFim, horas;
	scanf("%d %d", &horaInicio, &horaFim);
	
	if (horaInicio == horaFim) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	} else if (horaInicio > horaFim) {
		horas = 24 - horaInicio;
		horas = horas + horaFim;
		printf("O JOGO DUROU %d HORA(S)\n", horas);
	} else {
		horas = horaFim - horaInicio;
		printf("O JOGO DUROU %d HORA(S)\n", horas);
	};
 
    return 0;
}
