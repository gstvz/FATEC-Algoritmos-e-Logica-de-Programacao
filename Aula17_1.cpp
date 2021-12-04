/* 
1) Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos (de 100 a 999). 
Gere tr�s n�meros formados pelos d�gitos do n�mero lido (exiba cada n�mero em uma linha) e em seguida:
a) Encontre e exiba o maior valor dos tr�s n�meros digitados.
b) Some os dois maiores n�meros e divida pelo menor n�mero.
*/

#include <iostream>

int main() {
	int numero, x, y, z, maior, segundoMaior;
	double media;
	
	scanf("%d", &numero);
	
	x = numero / 100;
	y = (numero / 10) - x * 10;
	z = numero % 10;
	
	if (x > y && x > z) {
		maior = x;
		if (y > z) {
			segundoMaior = y;
			media = (maior + segundoMaior) / z;
		} else {
			segundoMaior = z;
			media = (maior + segundoMaior) / y;
		}
	} else if (z > y) {
		maior = z;
		segundoMaior = y;
		media = (maior + segundoMaior) / x;
	} else {
		maior = y;
		segundoMaior = z;
		media = (maior + segundoMaior) / x;
	}	
	
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
	printf("Z = %d\n", z);
	printf("Maior = %d\n", maior);
	printf("Media = %.2lf\n", media);
}
