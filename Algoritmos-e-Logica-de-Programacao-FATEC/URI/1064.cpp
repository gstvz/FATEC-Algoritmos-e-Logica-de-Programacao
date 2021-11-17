#include <iostream>
 
using namespace std;
 
int main() {
 
	float numero, soma, media;
	int contador, positivos = 0;	
	
	for(contador = 1; contador <= 6; contador++) {
		scanf("%f", &numero);	
			
		if(numero > 0) {
			positivos++;
			soma += numero;
		};
	};
	
	media = soma / positivos;
	
	printf("%d valores positivos\n", positivos);
	printf("%.1f\n", media);
 
    return 0;
}
