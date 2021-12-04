#include <iostream>

int main() {
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y, CNPJ;
	
	scanf("%d", &CNPJ);
	a = CNPJ / 10000000;		
	b = (CNPJ / 1000000) % 10;	
	c = (CNPJ / 100000) % 10;	
	d = (CNPJ / 10000) % 10;
	e = (CNPJ / 1000) % 10;
	f = (CNPJ / 100) % 10;
	g = (CNPJ / 10) % 10;
	h = (CNPJ / 1) % 10;

	x = ((a * 6) + (b * 7) + (c * 8) + (d * 9) + (e * 2) + (f * 3) + (g * 4) + (h * 5) + (0 * 6) + (0 * 7) + (0 * 8) + (1 * 9)) % 11;
	if (x == 10) {
		x = 0;
	}
	
	y = ((a * 5) + (b * 6) + (c * 7) + (d * 8) + (e * 9) + (f * 2) + (g * 3) + (h * 4) + (0 * 5) + (0 * 6) + (0 * 7) + (1 * 8) + (x * 9)) % 11;	

	if (y == 10) {
		y = 0;
	}
	
	printf("CNPJ + DV = %d%d.%d%d%d.%d%d%d/%d%d%d%d-%d%d", a, b, c, d, e, f, g, h, 0, 0, 0, 1, x, y);
}
