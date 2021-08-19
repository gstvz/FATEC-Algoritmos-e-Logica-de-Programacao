/* 
Faca um programa para ler as dimensoes de um terreno (comprimento c e largura l), bem como o preco do metro de tela p. 
Imprima o custo para cercar este mesmo terreno com tela.
*/

#include <iostream>
#include <math.h>

main() {
	float comprimento, largura, area, precoMetro, precoFinal;
	
	precoMetro = 13.50;
	comprimento = 15;
	largura = 25;	
	precoFinal = comprimento * largura * precoMetro;
	
	printf(" O preco do metro de tela e: R$%.2f \n O terreno tem %.2f metros de comprimento e %.2f metros de largura \n O preco total para cerca-lo e de: R$%.2f", precoMetro, comprimento, largura, precoFinal);
}
