/* 
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
O total a pagar com desconto de 10%;
O valor de cada parcela, no parcelamento de 3x sem juros;
A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total);
*/

#include <iostream>
#include <math.h>

main() {
	float valorTotal, desconto, valorComDesconto, valorParcela, comissaoAVista, comissaoParcela;
	
	printf(" Insira o valor total: ");
	scanf("%f", &valorTotal);	

	desconto = 0.9;
	valorComDesconto = valorTotal * desconto;
	valorParcela = valorTotal / 3;
	comissaoAVista = valorComDesconto * 0.05;
	comissaoParcela = valorTotal * 0.05;
	
	printf(" Produto de valor R$%.2f: \n", valorTotal);
	printf(" Valor a vista, com 10 porcento de desconto: R$%.2f \n", valorComDesconto);
	printf(" Valor parcelado em 3x sem juros: R$%.2f \n", valorParcela);
	printf(" Comissao do vendedor na venda a vista: R$%.2f \n", comissaoAVista);
	printf(" Comissao do vendedor na venda parcelada: R$%.2f \n", comissaoParcela);
}
