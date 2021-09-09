// Desenvolva um algoritmo que leia um número inteiro e exiba na tela se o mesmo é par ou impar.

#include <iostream>

int main() {
	int numero;
	printf(" Insira um numero: \n");
	scanf("%d", &numero);
		
	if (numero % 2 == 0) {
		printf(" Este numero e par. \n", numero);
	} else {
		printf(" Este numero e impar. \n", numero);
	}
	
	if (numero > 0) {
		printf(" Este numero e positivo. \n");
	} else {
		printf(" Este numero e negativo. \n");
	}
	
	if (numero % 3 == 0){
		printf(" Este numero e multiplo de 3. \n");
	} else {
		printf(" Este numero nao e multiplo de 3. \n");
	}
	
	if (numero % 4 == 0) {
		printf(" Este numero e multiplo de 4. \n");
	} else {
		printf(" Este numero nao e multiplo de 4. \n");
	}
	
	if (numero % 5 == 0) {
		printf(" Este numero e multiplo de 5. \n");
	} else {
		printf(" Este numero nao e multiplo de 5. \n");
	}
	
	if (numero % 7 == 0) {
		printf(" Este numero e multiplo de 7. \n");
	} else {
		printf(" Este numero nao e multiplo de 7. \n");
	}
	
	if (numero >= 10 && numero <= 100) {
		printf(" Este numero esta na faixa de 10 a 100. \n");
	} else {
		printf(" Este numero nao esta na faixa de 10 a 100. \n");
	}	
}
