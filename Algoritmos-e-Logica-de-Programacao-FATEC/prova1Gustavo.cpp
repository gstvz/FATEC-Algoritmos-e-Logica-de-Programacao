#include <iostream>

main() {
	char gustavo1[10];
	double gustavo2, gustavo4;
	int gustavo3;
	
	printf("Informe o numero do cupom:\n");
	scanf("%s", &gustavo1);
	
	printf("Informe o valor da venda:\n");
	scanf("%lf", &gustavo2);
	
	printf("Informe a distancia em km:\n");
	scanf("%d", &gustavo3);
	
	if(gustavo2 <= 500) {
		gustavo2 = gustavo2 * 1.20;
	} else if (gustavo2 > 500 && gustavo2 <= 1000) {
		gustavo2 = gustavo2 * 1.10;
	} else if (gustavo2 > 1000 && gustavo2 <= 1500) {
		gustavo2 = gustavo2 * 1.05;
	} else if (gustavo2 > 1500) {
		printf("Venda Sem Reajuste\n");
	} 
	
	if(gustavo3 < 10) {
		printf("Venda Sem Frete\n");
	} else if (gustavo3 >= 10 && gustavo3 <= 30) {
		gustavo2 = gustavo2 + 100;
	} else if (gustavo3 >= 40 && gustavo3 <= 60) {
		gustavo2 = gustavo2 + 200;
	} else if (gustavo3 >= 70 && gustavo3 <= 90) {
		gustavo2 = gustavo2 + 300;
	} else if (gustavo3 > 90) {
		gustavo2 = gustavo2 + 500;
	}
	
	if(gustavo1[2] == '1') {
		gustavo4 = 1500;
	} else if(gustavo1[2] == '2') {
		gustavo4 = 3000;
	} else if(gustavo1[2] == '3') {
		gustavo4 = 4000;
	}
	
	printf("Venda + Frete: %.2lf\n", gustavo2);
	printf("Cupom: %.2lf\n", gustavo4);
}
