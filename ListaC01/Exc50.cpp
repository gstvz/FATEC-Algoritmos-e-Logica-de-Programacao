/* 
Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/

#include <iostream>
#include <math.h>

main() {
	int idade, anoAtual, anoNascimento;
	
	printf(" Insira a sua idade: ");
	scanf("%i", &idade);
	
	printf(" Insira o ano atual: ");
	scanf("%i", &anoAtual);

	anoNascimento = anoAtual - idade;
	
	printf(" A pessoa que tem %i anos no ano de %i nasceu no ano de: %i ", idade, anoAtual, anoNascimento);
}
