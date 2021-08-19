/* 
Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distancia da origem (0; 0).
*/

#include <iostream>
#include <math.h>

main() {
	float x, y, origemA, origemB, distancia;
	
	x = 5;
	y = 3;
	origemA = 0;
	origemB = 0;
	distancia = pow(pow(x, 2) + pow(y, 2), 0.5);
	
	printf(" A distancia de (%.0f, %.0f) para a origem (%.0f, %.0f) e: %.2f ", x, y, origemA, origemB, distancia);
}
