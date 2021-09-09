/* Elabore um algoritmo que leia a idade de um nadador e exiba na tela a categoria que ele pertence:
	Se a idade é menor que 13 anos = infantil
	Se a idade é maior ou igual a 13 e a idade é menor que 21  = juvenil.
	Se a idade é maior que 21 = senior
*/

#include <iostream>;

int main() {
	int idade;
	
	printf(" Insira sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 13) {
		printf(" Infantil. \n");
	} else if (idade >= 13 && idade < 21) {
		printf(" Juvenil. \n");
	} else {
		printf(" Senior. \n");
	}
}
