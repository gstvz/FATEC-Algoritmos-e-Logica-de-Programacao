#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
	float A, B, C, X;
	scanf("%f %f %f", &A, &B, &C);
	
	if (A < B) { 
		X = A; 
		A = B; 
		B = X; 
	};
  	if (B < C) { 
		X = B; 
		B = C;
		C = X; 
	};
  	if (A < B) {
		X = A;
		A = B;
		B = X;
	};
	
	if (A >= (B + C)) {
		printf("NAO FORMA TRIANGULO\n");
	} else if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
		printf("TRIANGULO RETANGULO\n");
	} else if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
		printf("TRIANGULO OBTUSANGULO\n");
	} else if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
		printf("TRIANGULO ACUTANGULO\n");
	};
	
	if (A == B && B == C) {
		printf("TRIANGULO EQUILATERO\n");
	};
	if (A == B && A != C || A == C && A != B || B == C && B != A) {
		printf("TRIANGULO ISOSCELES\n");
	};
 
    return 0;
}
