#include <iostream>
 
using namespace std;
 
int main() {
 
	float valor, imposto;
	
	scanf("%f", &valor);
	
	if(valor <= 2000) {
		imposto = valor;
		printf("Isento\n");
	} else if(valor <= 3000) {		
		imposto = (valor - 2000) * 0.08;
		printf("R$ %.2f\n", imposto);
	} else if(valor <= 4500) {
		imposto = (valor - 3000) * 0.18 + (1000 * 0.08);
		printf("R$ %.2f\n", imposto);
	} else {
		imposto = (valor - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);
		printf("R$ %.2f\n", imposto);
	};	
 
    return 0;
}
