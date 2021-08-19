/* 
Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos;
*/

#include <iostream>
#include <math.h>

main() {
	int segundosTotais, horas, minutos, segundos;
	
	segundosTotais = 86237; // 23:57:17
	
	horas = segundosTotais / 3600;
	minutos = (segundosTotais % 3600) / 60;
	segundos = (segundosTotais % 60);
	
	printf(" %i segundos sao: %i:%i:%i ", segundosTotais, horas, minutos, segundos);
}
