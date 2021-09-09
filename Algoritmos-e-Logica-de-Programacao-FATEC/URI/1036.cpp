#include <iostream>
#include <math.h>

int main() {
	double a, b, c, delta, R1, R2;
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = pow(b, 2) - (4 * a * c);
	R1 = (-b + pow(delta, 0.5)) / (2 * a);
	R2 = (-b - pow(delta, 0.5)) / (2 * a);
	
	if (a == 0 || delta < 0 ) {
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
}
