/* 
A import�ncia de R$780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
O primeiro ganhador receber� 46%;
O segundo ganhador receber� 32%;
O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

#include <iostream>
#include <math.h>

main() {
	float valor, ganhador1, ganhador2, ganhador3;
	
	valor = 780.000,00;
	ganhador1 = (valor * 46) / 100;
	ganhador2 = (valor * 32) / 100;
	ganhador3 = valor - ganhador1 - ganhador2;	
	
	printf(" O premio de R$%.3f foi dividido em tres ganhadores: \n", valor);
	printf(" O primeiro ganhador recebeu R$%.3f \n", ganhador1);
	printf(" O segund ganhador recebeu R$%.3f \n", ganhador2);
	printf(" O terceiro ganhador recebeu R$%.3f \n", ganhador3);
}
