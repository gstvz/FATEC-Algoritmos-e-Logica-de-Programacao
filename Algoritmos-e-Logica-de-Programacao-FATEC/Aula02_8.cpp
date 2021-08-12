#include <iostream>

main() {
	char nome[40];
	int idade, anoNascimento;
	
	printf(" Qual o seu nome? ");
	scanf("%s", &nome);
	
	printf(" Quantos anos voce fez ou fara nesse ano? ");
	scanf("%i", &idade);
	
	anoNascimento = 2021 - idade;
	
	printf(" Voce nasceu no ano %i", anoNascimento);
}
