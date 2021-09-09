/* Elabore um algoritmo que mostre a condição de um indivíduo segundo a Organização Mundial de Saúde, cujo critério é:
Abaixo do peso	Abaixo de 18.5
No peso normal	Entre 18.5 (inclusive) e 25
Acima do peso	Entre 25 (inclusive) e 30
Obeso	Acima ou igual a 30

IMC = peso / (altura * altura)
*/

#include <iostream>;
#include <math.h>;

int main() {
	double peso, altura, IMC;
	
	printf(" Entre com o seu PESO: ");
	scanf("%lf", &peso);
	printf(" Entre com a sua ALTURA: ");
	scanf("%lf", &altura);	
	IMC = peso / pow(altura, 2);
	printf(" Seu IMC: %lf. \n", IMC);
	
	if (IMC < 18.5) {
		printf(" Sua condicao: Abaixo do peso. \n");
	} else if (IMC >= 18.5 && IMC < 25) {
		printf(" Sua condicao: No peso normal. \n");
	} else if (IMC >= 25 && IMC < 30) {
		printf(" Sua condicao: Acima do peso. \n");
	} else {
		printf(" Sua condicao: Obeso. \n");
	}
}
