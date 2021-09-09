#include <iostream>

main(){
	float valor, cliente, parcela;
	printf("Qual o valor do carro?");
	scanf("%f", &valor);
	
	printf("Quanto de dinheiro o cliente tem?");
	scanf("%f", &cliente);
	
	if(cliente == valor){
		printf("Valor pago a vista.\n");
	} else {
		parcela = valor - cliente;
		parcela = parcela / 2;
		printf("Valor a pagar a prazo: 2 x %.2f\n", parcela);
	}
}
