#include <iostream>
 
using namespace std;
 
int main() {
 
	int numero, maior = 0, posicao, contador;
	
	for(contador = 1; contador <= 100; contador++) {
		scanf("%d", &numero);
		
		if(numero > maior) {
			maior = numero;
			posicao = contador;
		};
		
	};	
	
	printf("%d\n", maior);
	printf("%d\n", posicao);
 
    return 0;
}
