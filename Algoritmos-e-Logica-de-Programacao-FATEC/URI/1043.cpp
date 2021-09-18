#include <iostream>
 
using namespace std;
 
int main() {
 
	double A, B, C, PERIMETRO, AREA;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if (A < B + C && B < A + C && C < A + B) {
		PERIMETRO = A + B + C;
		printf("Perimetro = %.1lf\n", PERIMETRO);
	} else {
		AREA = (A + B) * C / 2;
		printf("Area = %.1lf\n", AREA);
	}
 
    return 0;
}
