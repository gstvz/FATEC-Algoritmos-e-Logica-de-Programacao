/* 
Exiba na tela os números pares de 2 a 50 (ordem decrescente)
*/

#include <iostream>

main() {
	int x;
	
	x = 2;
	
	while (x <= 50) {
		if(x % 2 == 0) {
			printf("%d\n", x);
		};
		x++;
	};
};
