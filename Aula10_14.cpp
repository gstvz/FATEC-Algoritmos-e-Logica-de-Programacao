/* Uma companhia de seguros classifica seus segurados em tr�s categorias de grupo de risco baseadas na idade.
Somente pessoas com pelo menos 18 anos e n�o mais de 70 anos podem adquirir ap�lices de seguros, caso esteja fora dessa faixa informar "imposs�vel seguro". 
 Idade 		  	  Grupo de Risco
18 a 24 				Baixo
25 a 40 				M�dio
41 a 70 				Alto
Desenvolva um programa que leia a idade de uma pessoa e informe o seu grupo de risco, ou se � imposs�vel realizar o seguro.
*/

#include <iostream>

int main() {
	int idade;
	
	printf(" Informe sua idade: \n");
	scanf("%d", &idade);
	
	if(idade < 18 || idade > 70) {
		printf(" Impossivel seguro. \n");
	} else if(idade >= 18 && idade <= 24) {
		printf(" Grupo de risco: Baixo. \n");
	} else if (idade >=25 && idade <= 40) {
		printf(" Grupo de risco: Medio. \n");
	} else if (idade >= 41 && idade <= 70) {
		printf(" Grupo de risco: Alto. \n");
	}
}
