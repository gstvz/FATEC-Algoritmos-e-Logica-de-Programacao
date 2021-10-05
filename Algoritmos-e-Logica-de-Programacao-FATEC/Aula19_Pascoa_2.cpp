#include <iostream>

int main() {
	int a, b, c, d, e, f, g, h, i, k, l, m, ANO, MES, DIA;
	
	scanf("%d", &ANO);
	
	a = ANO % 19;
	b = ANO / 100;
	c = ANO % 100;
	d = b / 4;
	e = b % 4;
	f = (b + 8) / 25;
	g = (b - f + 1) / 3;
	h = (19 * a + b - d - g + 15) % 30;
	i = c / 4;
	k = c % 4;
	l = (32 + 2 * e + 2 * i - h - k) % 7;
	m = (a + 11 * h + 22 * l) / 451;
	MES = ((h + l - 7 * m + 114) / 31);
	DIA = ((h + l - 7 * m + 114) % 31) + 1;
	
	if (MES == 3) {
		printf("A pascoa de %d cai no dia %d de marco\n", ANO, DIA);
	} else {
		printf("A pascoa de %d cai no dia %d de abril\n", ANO, DIA);
	}	
}
