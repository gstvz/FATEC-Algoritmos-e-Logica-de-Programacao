#include <iostream>
 
using namespace std;
 
int main() {
 
	int diaInicio, horasInicio, minutosInicio, segundosInicio, diaFim, horasFim, minutosFim, segundosFim;
	
	scanf("Dia %d", &diaInicio);
	scanf("%d : %d : %d\n", &horasInicio, &minutosInicio, &segundosInicio);
	scanf("Dia %d", &diaFim);
	scanf("%d : %d : %d", &horasFim, &minutosFim, &segundosFim);
	
	diaFim = diaFim - diaInicio;
	horasFim = horasFim - horasInicio;
	minutosFim = minutosFim - minutosInicio;
	segundosFim = segundosFim - segundosInicio;
	
	if(segundosFim < 0) {
		segundosFim += 60;
		minutosFim--;
	};
	
	if(minutosFim < 0) {
		minutosFim += 60;
		horasFim--;
	};
	
	if(horasFim < 0) {
		horasFim += 24;
		diaFim--;
	};
	
	printf("%d dia(s)\n", diaFim);
	printf("%d hora(s)\n", horasFim);
	printf("%d minuto(s)\n", minutosFim);
	printf("%d segundo(s)\n", segundosFim);	
 
    return 0;
}
