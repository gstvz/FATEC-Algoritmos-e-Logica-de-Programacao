#include <iostream>

main() {
	int a, b, c, d;
	printf(" Entre com um numero: ");
	scanf("%d", &a);
	printf(" Entre com um segundo numero: ");
	scanf("%d", &b);
	printf(" Entre com um terceiro numero: ");
	scanf("%d", &c);
	printf(" Entre com um quarto numero: ");
	scanf("%d", &d);
	
	if ((a > b) && (a > c) && (a > d)) {
		printf("%d e o maior numero.\n", a);
	} else if ((b > c) && (b > d)) {
		printf("%d e o maior numero.\n", b);
	} else if (c > d) {
		printf("%d e o maior numero.\n", c);
	} else {
		printf("%d e o maior numero.\n", d);
	}
}
