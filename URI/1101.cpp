#include <iostream>
 
using namespace std;
 
int main() {
 
	int M = 1, N = 1, MAIOR, MENOR, SOMA, CONTADOR;
	scanf("%d %d", &M, &N);
	
	while(M > 0 && N > 0) {		
		
		if(M > N) {
			MAIOR = M;
			MENOR = N;
		} else {
			MAIOR = N;
			MENOR = M;
		};
		
		for(CONTADOR = MENOR; CONTADOR <= MAIOR; CONTADOR++) {
			printf("%d ", CONTADOR);
			SOMA += CONTADOR;
		};
		
		printf("Sum=%d\n", SOMA);
		SOMA = 0;
		scanf("%d %d", &M, &N);
	};
 
    return 0;
}
