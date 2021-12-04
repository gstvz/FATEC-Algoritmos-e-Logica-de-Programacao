#include <iostream>
 
using namespace std;
 
int main() {
 
	int numero, contador, pares = 0, impares = 0, positivos = 0, negativos = 0;
	
	for(contador = 1; contador <= 5; contador++) {
		scanf("%d", &numero);
		
		if(numero % 2 == 0) {
			pares++;			
		} else {
			impares++;			
		};
		
		if(numero < 0) {
			negativos++;						
		} else if(numero > 0) {
			positivos++;			
		};
				
	};
	
	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", positivos);
	printf("%d valor(es) negativo(s)\n", negativos);
 
    return 0;
}
