/* 
Uma forma para verificar se um dado n�mero � quadrado perfeito � somar os n�meros �mpares at� que a soma seja igual ou superior ao n�mero. 
Se a soma for igual, o n�mero � quadrado perfeito.
*/

#include <iostream>

main() {
	int numero, soma, impar;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	soma = 0;
	impar = 1;
	
	while(soma < numero) { 
		soma = soma + impar;
		impar = impar + 2;
	}
	
	if (soma == numero) {
		printf("O numero %d e quadrado perfeito", numero);
	} else {
		printf("O numero %d nao e quadrado perfeito", numero);
	}
}

/* TESTE
numero	soma	impar
9		9		7
5		9		7
*/
