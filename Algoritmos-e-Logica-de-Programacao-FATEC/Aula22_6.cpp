/*
Exiba as seguintes sequências: 	
99, 88, 77, 66, …, 11, 0.
20, 17, 14, …, 5, 2.
1, 4, 9, 16, ..., 100
*/

#include <iostream>

main() {
	int x, y, z;
	
	x = 99;
	y = 20;
	z = 1;
	
	while(x >= 0) {
		printf("%d ", x);
		x -= 11;
	};
	
	printf("\n");
	
	while(y >= 2) {
		printf("%d ", y);
		y -= 3;
	};
	
	printf("\n");
	
	while(z <= 10) {
		int aux = z * z;
		printf("%d ", aux);		
		z++;
	}; 
};
