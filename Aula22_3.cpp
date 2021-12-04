/*
Exibir os números ímpares que estão entre 2 e 30 (incluir os extremos).
*/

#include <iostream>

main() {
	int x;
	
	x = 2;
	
	while(x <= 30) {
		if(x % 2 != 0) {
			printf("%d ", x);
		}
		x += 1;
	};
};
