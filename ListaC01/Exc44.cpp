/* 
Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada.
Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/

#include <iostream>
#include <math.h>

main() {
	float alturaDegrau, alturaObjetivo;
	int degrausNecessarios;
	
	printf(" Qual a altura de cada degrau, em centimetros? ");
	scanf("%f", &alturaDegrau);
	
	printf(" Qual altura deseja alcancar, em metros? ");
	scanf("%f", &alturaObjetivo);
	
	degrausNecessarios = (alturaObjetivo / alturaDegrau) * 1000;
	printf(" A quantidade necessaria de degraus de %.2fcm para subir %.2fm e: %i ", alturaDegrau, alturaObjetivo, degrausNecessarios);
}
