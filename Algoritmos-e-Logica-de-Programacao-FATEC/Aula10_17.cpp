/* O custo ao consumidor de um carro � a soma de pre�o de f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.
Fa�a um programa que receba o pre�o de f�brica de um ve�culo e de acordo com a tabela abaixo calcule o pre�o final do ve�culo.
Pre�o do f�brica		Imposto		Lucro do distribuidor
At� 30.000,00			25%			20%
Acima 30.000,00			30%			27%
*/

#include <iostream>

int main() {
	double precoFabrica, precoFinal, imposto, lucro;
	
	printf(" Informe o preco de fabrica do carro: \n");
	scanf("%lf", &precoFabrica);
	
	if (precoFabrica < 30000) {
		imposto = (precoFabrica * 25) / 100;
		lucro = (precoFabrica * 20) / 100;
		precoFinal = precoFabrica + imposto + lucro;
		printf(" Preco do veiculo: %.2lf \n Imposto: %.2lf \n Distribuidor: %.2lf \n Preco final do veiculo: %.2lf \n", precoFabrica, imposto, lucro, precoFinal);
	} else {
		imposto = (precoFabrica * 30) / 100;
		lucro = (precoFabrica * 27) / 100;
		precoFinal = precoFabrica + imposto + lucro;
		printf(" Preco do veiculo: %.2lf \n Imposto: %.2lf \n Distribuidor: %.2lf \n Preco final do veiculo: %.2lf \n", precoFabrica, imposto, lucro, precoFinal);
	}
}
