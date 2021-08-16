/* 
Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

#include <iostream>
#include <math.h>

main() {
	float nota1, nota2, nota3, nota4, media;
	
	nota1 = 7;
	nota2 = 8.5;
	nota3 = 10;
	nota4 = 9;
	media = (nota1 + nota2 + nota3 + nota4)/ 4;	
	
	printf(" A media das notas %.2f + %.2f + %.2f + %.2f e: %.2f", nota1, nota2, nota3, nota4, media);
}
