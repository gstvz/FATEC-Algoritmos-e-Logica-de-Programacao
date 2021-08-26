/* 
Faça um programa que leia um numero inteiro positivo de tres digitos (de 100 a 999).
Gere outro numero formado pelos digitos invertidos do numero lido.
*/

#include <iostream>
#include <math.h>

main() {
	int numero, centena, dezena, unidade, soma;
	
	printf(" Insira um numero: ");
	scanf("%i", &numero);
	
	centena = numero / 100;
	dezena = numero % 100 / 10;
	unidade = numero % 100 % 10;
	soma = centena + dezena * 10 + unidade * 100;
	
	printf(" O numero %i invertido e: %03i ", numero, soma);
}
