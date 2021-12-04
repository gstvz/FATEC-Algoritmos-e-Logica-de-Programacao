/* Elabore um algoritmo que leia 3 medidas de (a,b,c) e determine qual tipo de triângulo estas medidas podem ser:
Equilátero: todas as medidas são iguais.
Isósceles: dois lados iguais.
Escaleno: todos os lados diferentes.
*/

#include <iostream>;

int main() {
	int a, b, c;
	printf(" Insira as tres medidas do triangulo: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && a == c) {
		printf(" Este triangulo e equilatero. ");
	} else if (a == b || a == c || b == c){
		printf(" Este triangulo e isosceles. ");
	} else {
		printf(" Este triangulo e escaleno. ");
	}
}
