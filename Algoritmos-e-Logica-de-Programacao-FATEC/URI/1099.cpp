#include <iostream>
 
using namespace std;
 
int main() { 
	int N, X, Y, CONTADOR, TEMP, SOMA;
	
	scanf("%d", &N);
	
	while(CONTADOR < N) {
		scanf("%d %d", &X, &Y);
		
		if(X > Y) {
			TEMP = Y + 1;
			
			while(TEMP < X) {
				if(TEMP % 2 != 0) {
					SOMA += TEMP;
				};
				
				TEMP++;
			};
		} else if(Y > X) {
			TEMP = X + 1;
			
			while(TEMP < Y) {
				if(TEMP % 2 != 0) {
					SOMA += TEMP;
				};
				
				TEMP++;
			};
		};
		
		printf("%d\n", SOMA);
		CONTADOR++;
		SOMA = 0;
	};
 
    return 0;
}
