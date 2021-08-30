#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() { 
	double A, R, n;
	n = 3.14159;
	scanf("%lf", &R);
	A = n * pow(R, 2);
	printf("A=%.4lf\n", A);
    return 0;
}
