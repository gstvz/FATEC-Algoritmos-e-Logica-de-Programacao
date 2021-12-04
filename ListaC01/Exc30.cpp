/* 
Leia um valor em real e a cotação em dólar. Em seguida, imprima o valor correspondente em dólar.
*/

#include <iostream>
#include <math.h>

main() {
	float real, dolar, cotacao;
	
	printf(" Insira o valor em real: ");
	scanf("%f", &real);
	
	printf(" Insira a cotacao do dolar: ");
	scanf("%f", &cotacao);

	dolar = real * cotacao;	
	
	printf(" R$%.2f convertido para dolar na cotacao R$%.2f e: $%.2f", real, cotacao, dolar);
}
