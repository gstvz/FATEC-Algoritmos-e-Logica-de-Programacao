/* 
Faca um programa que leia o horario (hora, minuto e segundo) de inicio e a duracao, em segundos, de uma experiencia biologica. 
O programa deve resultar com o novo horario (hora, minuto e segundo) do termino da mesma.
*/

#include <iostream>
#include <math.h>

main() {
	int horas, minutos, segundos, duracao, novaHora, novosMinutos, novosSegundos;
	
	printf(" Insira as horas: ");
	scanf("%i", &horas);
	
	printf(" Insira os minutos: ");
	scanf("%i", &minutos);
	
	printf(" Insira os segundos: ");
	scanf("%i", &segundos);
	
	printf(" Insira a duracao da experiencia, em segundos: ");
	scanf("%i", &duracao);
	
	novaHora = horas + (duracao / 3600);
	novosMinutos = minutos + ((duracao % 3600) / 60);
	novosSegundos = segundos + ((duracao % 3600) % 60);
	
	printf(" A tarefa se iniciou as: %02i:%02i:%02i \n Tera duracao de %i segundos \n A tarefa se encerrara as: %02i:%02i:%02i", horas, minutos, segundos, duracao, novaHora, novosMinutos, novosSegundos)	;
}
