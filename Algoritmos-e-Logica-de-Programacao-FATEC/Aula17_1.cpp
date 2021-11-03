/* 
1) Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). 
Gere três números formados pelos dígitos do número lido (exiba cada número em uma linha) e em seguida:
a) Encontre e exiba o maior valor dos três números digitados.
b) Some os dois maiores números e divida pelo menor número.
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
