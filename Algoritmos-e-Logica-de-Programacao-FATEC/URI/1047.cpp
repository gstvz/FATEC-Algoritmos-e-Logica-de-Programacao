#include <iostream>

using namespace std;

int main() {
	
	int horaInicial, minutoInicial, soma1, horaFinal, minutoFinal, soma2, total, horas, minutos;
	
	scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
	
	if(horaFinal <= horaInicial && minutoFinal <= minutoInicial) {
		horaFinal = horaFinal + 24;
	} else if (minutoFinal <= minutoInicial) {
		minutoFinal = minutoFinal + 60;
		horaFinal = horaFinal - 1;
	}
	
	soma1 = (horaInicial * 3600) + (minutoInicial * 60);
	soma2 = (horaFinal * 3600) + (minutoFinal * 60);
	total = (soma2 - soma1);
	horas = total / 3600;
	minutos = (total - (horas * 3600)) / 60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
		
	return 0;	
}

