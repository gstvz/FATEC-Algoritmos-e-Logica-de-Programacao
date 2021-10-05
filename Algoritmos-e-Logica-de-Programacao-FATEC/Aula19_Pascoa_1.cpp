#include <iostream>

int main() {
	int a, b, c, d, e, x, y, ANO, DIA;
	
	x = 24;
	y = 5;
	
	scanf("%d", &ANO);
	
	a = ANO % 19;
	b = ANO % 4;
	c = ANO % 7;
	d = ((19 * a) + x) % 30;
	e = ((2 * b) + (4 * c) + (6 * d) + y) % 7;
	
	if (d + e < 10) {
		DIA = (d + e + 22);
		printf("Pascoa em %d de marco", DIA);
	} else {
		DIA = (d + e - 9);
		if (DIA == 26) {
			DIA = 19;
			printf("Pascoa em %d de abril", DIA);
		} else if (DIA == 25 && d == 28 && a > 10) {
			DIA = 18;
			printf("Pascoa em %d de abril", DIA);
		}
		printf("Pascoa em %d de abril", DIA);
	}
}
