/* 
Faca um programa para ler as dimensoes de um terreno (comprimento c e largura l), bem como o preco do metro de tela p. 
Imprima o custo para cercar este mesmo terreno com tela.
*/

#include <iostream>
#include <math.h>

main() {
	float comprimento, largura, precoMetro, precoFinal;
	
	printf(" Insira o comprimento e a largura do terreno: ");
	scanf("%f %f", &comprimento, &largura);
	
	printf(" Insira o valor do preco do metro: ");
	scanf("%f", &precoMetro);
	
	precoFinal = comprimento * largura * precoMetro;
	
	printf(" O preco do metro de tela e: R$%.2f \n O terreno tem %.2f metros de comprimento e %.2f metros de largura \n O preco total para cerca-lo e de: R$%.2f", precoMetro, comprimento, largura, precoFinal);
}
