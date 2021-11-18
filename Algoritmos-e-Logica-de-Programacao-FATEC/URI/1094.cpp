#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador, quantia, cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
	float percentualCoelhos, percentualRatos, percentualSapos;
	char tipo;
	
	scanf("%d", &n);
	
	for(contador = 1; contador <= n; contador++) {
		scanf("%d %c", &quantia, &tipo);
		
		cobaias += quantia;		
		
		switch(tipo) {
			case 'C' :
				coelhos += quantia;				
				break;
			case 'R' :
				ratos += quantia;				
				break;
			case 'S' :
				sapos += quantia;				
				break;
		};
	};
	
	percentualCoelhos = coelhos * 100.0 / cobaias;
	percentualRatos = ratos * 100.0 / cobaias;
	percentualSapos = sapos * 100.0 / cobaias;
 
 	printf("Total: %d cobaias\n", cobaias);
 	printf("Total de coelhos: %d\n", coelhos);
 	printf("Total de ratos: %d\n", ratos);
 	printf("Total de sapos: %d\n", sapos);
 	printf("Percentual de coelhos: %.2f %%\n", percentualCoelhos);
 	printf("Percentual de ratos: %.2f %%\n", percentualRatos);
 	printf("Percentual de sapos: %.2f %%\n", percentualSapos);
 	
    return 0;
}
