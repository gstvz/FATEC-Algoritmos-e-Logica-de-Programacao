/* 
Qual é a resposta produzida pelo programa se o número 13 é digitado como entrada de dados.
*/

#include<iostream>

main() {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while(n != 1) {
		if(n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1;						
		};
		printf("%d ", n);
	}
}

/* TESTE
13 
40 20 10 5 16 8 4 2 1
*/
