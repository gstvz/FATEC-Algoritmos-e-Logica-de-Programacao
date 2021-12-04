/* O custo ao consumidor de um carro é a soma de preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um programa que receba o preço de fábrica de um veículo e de acordo com a tabela abaixo calcule o preço final do veículo.
Preço do fábrica		Imposto		Lucro do distribuidor
Até 30.000,00			25%			20%
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
