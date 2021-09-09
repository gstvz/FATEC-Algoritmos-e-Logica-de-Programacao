/* 
Desafio:
Dados 3 três números diferentes, exibi-los em ordem crescente.

Entrada de dados:
1 5 9 = a, b, c = (a < b e c, c > b);
1 9 5 = a, c, b = (a < b e c, b > c);

5 9 1 = c, a, b = (a < b, a > c);
5 1 9 = b, a, c = (a > b, a < c);

9 1 5 = b, c, a = (a > b e c, c > b);
9 5 1 = c, b, a = (a > b e c, b > c);

*/

#include <iostream>

int main() {
	int a, b, c;
	printf(" Insira tres numeros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c) {
		if(b > c) {
			printf("%d, %d, %d. \n", c, b, a);
		} else {
			printf("%d, %d, %d. \n", b, c, a);
		}
	} else if (a > b && a < c) {
		printf("%d, %d, %d. \n", b, a, c);
	} else if (a < b && a > c) {
		printf("%d, %d, %d. \n", c, a, b);
	} else if (b > c) {
		printf("%d, %d, %d. \n", a, c, b);
	} else {
		printf("%d, %d, %d. \n", a, b, c);
	}
}
