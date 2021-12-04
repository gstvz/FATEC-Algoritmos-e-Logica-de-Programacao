#include <iostream>
 
using namespace std;
 
int main() {
 
	int x, y, contador, soma = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x > y) {
		contador = y + 1;
		
		while(contador < x) {
			
			if(contador % 2 != 0) {				
				soma += contador;				
			};
			
			contador++;
		};
				
	} else {
		contador = x + 1;
		
		while(contador < y) {
			
			if(contador % 2 != 0) {				
				soma += contador;				
			};
			
			contador++;
		};
	}
	
	printf("%d\n", soma);
 
    return 0;
}
