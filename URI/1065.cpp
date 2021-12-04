#include <iostream>
 
using namespace std;
 
int main() {
 
	int numero, contador, pares;
	
	for(contador = 1; contador <= 5; contador++) {
		scanf("%d", &numero);
		
		if(numero % 2 == 0) {
			pares++;
		};
		
	};
	
	printf("%d valores pares\n", pares);
 
    return 0;
}
