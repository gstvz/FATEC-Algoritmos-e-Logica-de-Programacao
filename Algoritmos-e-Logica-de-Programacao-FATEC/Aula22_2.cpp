/*
Exibir os números pares que estão entre 2 e 20 (incluir os extremos).
*/

#include <iostream>

main() {
	int x;
	
	x = 2;
	
	while(x <= 20) {
		if(x % 2 == 0) {
			printf("%d ", x);
		}
		x += 1;
	};
};
