#include <iostream>

int main() {
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y;
	double CNPJ;
	
	scanf("%lf", &CNPJ);
	a = int(CNPJ / 100000000000);		
	b = int(CNPJ / 10000000000) % 10;	
	c = int(CNPJ / 1000000000) % 10;	
	d = int(CNPJ / 100000000) % 10;
	e = int(CNPJ / 10000000) % 10;
	f = int(CNPJ / 1000000) % 10;
	g = int(CNPJ / 100000) % 10;
	h = int(CNPJ / 10000) % 10;
	i = int(CNPJ / 1000) % 10;
	j = int(CNPJ / 100) % 10;
	k = int(CNPJ / 10) % 10;
	l = int(CNPJ / 1) % 10;
	printf("%d\n", k);

	x = ((a * 6) + (b * 7) + (c * 8) + (d * 9) + (e * 2) + (f * 3) + (g * 4) + (h * 5) + (i * 6) + (j * 7) + (k * 8) + (l * 9)) % 11;
	if (x == 10) {
		x = 0;
	}
	
	y = ((a * 5) + (b * 6) + (c * 7) + (d * 8) + (e * 9) + (f * 2) + (g * 3) + (h * 4) + (i * 5) + (j * 6) + (k * 7) + (l * 8) + (x * 9)) % 11;	

	if (y == 10) {
		y = 0;
	}
	
	printf("CNPJ + DV = %d%d.%d%d%d.%d%d%d/%d%d%d%d-%d%d", a, b, c, d, e, f, g, h, i, j, k, l, x, y);
}
