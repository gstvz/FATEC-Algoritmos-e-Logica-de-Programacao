/* 
Leia um valor em real e a cota��o em d�lar. Em seguida, imprima o valor correspondente em d�lar.
*/

#include <iostream>
#include <math.h>

main() {
	float real, dolar, cotacao;
	
	real = 100.00;
	cotacao = 5.24; // 16/08/2021
	dolar = real * cotacao;	
	
	printf(" R$%.2f convertido para dolar na cotacao R$%.2f e: $%.2f", real, cotacao, dolar);
}
