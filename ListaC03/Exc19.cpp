/*
Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída cada um dos algarismos que compõem o número
*/

#include <iostream>

main() {
	int algarismo;
	int numero;
	int x = 3;
	
	printf("Insira um numero entre 100 e 999: \n");
	scanf("%d", &numero);
	
	while(x > 0) {		
		
		if(x == 3) {
			algarismo = numero / 100;
			printf("%d\n", algarismo);
			algarismo *= 100;			
			numero -= algarismo;			
		} else if(x == 2) {
			algarismo = numero / 10;
			printf("%d\n", algarismo);
			algarismo *= 10;			
			numero -= algarismo;			
		} else {
			algarismo = numero;
			printf("%d\n", algarismo);
		};
				
		x--;
	};
};
