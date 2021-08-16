// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <iostream>

main() {
	int numero1, numero2, numero3, soma;
	
	printf(" Insira o primeiro numero: ");
	scanf("%i", &numero1);
	
	printf(" Insira o segundo numero: ");
	scanf("%i", &numero2);
	
	printf(" Insira o terceiro numero: ");
	scanf("%i", &numero3);
	
	soma = numero1 + numero2 + numero3;
	
	printf(" A soma dos tres numeros e %i", soma);
}
