/* 
Uma forma para verificar se um dado número é quadrado perfeito é somar os números ímpares até que a soma seja igual ou superior ao número. 
Se a soma for igual, o número é quadrado perfeito.
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
