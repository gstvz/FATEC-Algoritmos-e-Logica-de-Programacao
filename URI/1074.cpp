#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, numero, contador = 0;
	
	scanf("%d", &n);
	
	while(contador < n) {
		
		scanf("%d", &numero);
		
		if(numero == 0) {
			printf("NULL\n");
		} else {
			if(numero % 2 == 0) {
				printf("EVEN ");
			} else {
				printf("ODD ");
			};
			
			if(numero > 0) {
				printf("POSITIVE\n");
			} else {
				printf("NEGATIVE\n");
			};
		};
		
		contador++;
	};
 
    return 0;
}
