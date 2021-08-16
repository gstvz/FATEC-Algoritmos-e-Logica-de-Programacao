/* 
Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

#include <iostream>
#include <math.h>

main() {
	int numero, antecessor, sucessor;
	
	numero = 5;
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf(" O numero %i tem como antecessor %i e como sucessor %i", numero, antecessor, sucessor);
}
