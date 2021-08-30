#include <iostream>
 
using namespace std;
 
int main() {

	char NOME[40];
	double SALARIO, VENDAS, TOTAL;
	scanf("%s %lf %lf", &NOME, &SALARIO, &VENDAS);
	TOTAL = ((VENDAS * 15) / 100) + SALARIO;
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	
	return 0;
}
