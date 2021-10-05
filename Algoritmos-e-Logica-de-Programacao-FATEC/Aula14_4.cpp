#include <iostream>
#include <math.h>

int main() {
	double x, y, z, soma, mediaGeometrica, area;
	
	scanf("%lf %lf %lf", &x, &y, &z);
	
	soma = x + y + z;
	mediaGeometrica = pow(x * y * z, 0.333333);	
	
	if (x > y && x > z) {
		soma = soma / x;
		if (y > z) {
			area = (3.1415926 * (pow(z, 2)));			
			printf("Crescente: %.0lf %.0lf %.0lf\n", z, y, x);
		} else {
			area = (3.1415926 * (pow(y, 2)));
			printf("Crescente: %.0lf %.0lf %.0lf\n", y, z, x);
		}
	} else if (x > y && x < z) {
		soma = soma / z;
		area = (3.1415926 * (pow(y, 2)));		
		printf("Crescente: %.0lf %.0lf %.0lf\n", y, x, z);
	} else if (x < y && x > z) {
		soma = soma / y;
		area = (3.1415926 * (pow(z, 2)));
		printf("Crescente: %.0lf %.0lf %.0lf\n", z, x, y);
	} else if (y > z) {
		soma = soma / y;
		area = (3.1415926 * (pow(x, 2)));
		printf("Crescente: %.0lf %.0lf %.0lf\n", x, z, y);
	} else {
		soma = soma / z;
		area = (3.1415926 * (pow(x, 2)));
		printf("Crescente: %.0lf %.0lf %.0lf\n", x, y, z);
	}
	
	printf("Media: %.4lf\n", soma);
	printf("Media Geometrica: %.4lf\n", mediaGeometrica);
	printf("Area: %.5lf\n", area);
}

